#!/usr/bin/env bash

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

echo "Generating standard rusEFI configuration for Brick..."

cd "$SCRIPT_DIR/../../.."

bash gen_config_board.sh config/boards/brick brick

INI="tunerstudio/generated/rusefi_brick.ini"

echo "Applying Brick-specific TunerStudio OutputChannels settings..."

python3 - "$INI" <<'PY'
import sys
from pathlib import Path

ini = Path(sys.argv[1])
text = ini.read_text()

required = """scatteredOchGetCommand = 9
scatteredOffsetArray = highSpeedOffsets
scatteredGetEnabled = { 1 }"""

if required in text:
    print("Brick scattered settings already present.")
    raise SystemExit(0)

needle = "ochBlockSize = "

pos = text.find(needle)

if pos == -1:
    raise SystemExit("ERROR: Could not find ochBlockSize in Brick INI")

line_end = text.find("\n", pos)

if line_end == -1:
    line_end = len(text)

replacement = text[:line_end + 1] + "\n" + required + "\n" + text[line_end + 1:]

ini.write_text(replacement)

print("Brick scattered settings added.")
PY

echo "Brick configuration generation complete."
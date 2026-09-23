#!/usr/bin/env bash

set -e

BOARD_DIR="config/boards/brick"
SHORT_BOARD_NAME="brick"

echo "Generating normal rusEFI configuration for Brick..."

bash gen_config_board.sh "$BOARD_DIR" "$SHORT_BOARD_NAME"

INI="tunerstudio/generated/rusefi_brick.ini"

echo "Applying Brick-specific TunerStudio OutputChannels settings..."

python3 - "$INI" <<'PY'
import sys
from pathlib import Path

ini = Path(sys.argv[1])

if not ini.exists():
    raise SystemExit(f"ERROR: Generated INI does not exist: {ini}")

text = ini.read_text()

settings = """scatteredOchGetCommand = 9
scatteredOffsetArray = highSpeedOffsets
scatteredGetEnabled = { 1 }"""

# Don't add the settings twice.
if settings in text:
    print("Brick scattered settings already present.")
    raise SystemExit(0)

lines = text.splitlines(keepends=True)

# Find the [OutputChannels] section.
section_start = None
section_end = len(lines)

for i, line in enumerate(lines):
    if line.strip() == "[OutputChannels]":
        section_start = i
        break

if section_start is None:
    raise SystemExit("ERROR: [OutputChannels] section not found in Brick INI")

# Find the next INI section.
for i in range(section_start + 1, len(lines)):
    stripped = lines[i].strip()

    if stripped.startswith("[") and stripped.endswith("]"):
        section_end = i
        break

# Insert immediately before the next section.
insertion = (
    "\n"
    + settings
    + "\n\n"
)

lines.insert(section_end, insertion)

ini.write_text("".join(lines))

print("Brick scattered settings inserted successfully.")
PY

echo
echo "Verifying Brick INI..."

grep -A8 -B3 -n "\[OutputChannels\]" "$INI"

echo
echo "Brick configuration generation complete."
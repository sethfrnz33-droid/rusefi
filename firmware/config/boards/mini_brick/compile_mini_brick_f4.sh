#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/../../.."
bash bin/compile.sh config/boards/mini_brick/meta-info-mini_brick_f4.env "$@"

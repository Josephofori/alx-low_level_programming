#!/bin/bash
wget -P /tmp/https://github.com/Josephofori/alx-low_level_programming/blob/master/0x18-dynamic_libraries/cheat.so
export LD_PRELOAD=/tmp/cheat.so

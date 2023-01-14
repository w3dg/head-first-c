#!/bin/bash


# Find all executables, dont match files under .git, dont kill this script itself, "nerf.sh", xargs for rm on all
find . -type f -executable | grep --invert-match "git" | grep --invert-match "nerf.sh" |  xargs rm 2>/dev/null



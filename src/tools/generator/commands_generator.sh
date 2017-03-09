#!/bin/bash

tool_dir=$(dirname $0)
src_dir=$tool_dir/../../..
wd=$(pwd)

echo ":: Build virtualenv at $wd/venv"
virtualenv -q $wd/venv

echo ":: Install required tools"
$wd/venv/bin/pip install -r $tool_dir/requirements.txt

echo ":: Generate source files"
$wd/venv/bin/cog.py -d -o $src_dir/include/moopass/commands/definition.h $tool_dir/command_definition.h
$wd/venv/bin/cog.py -d -o $src_dir/src/commands/info.c $tool_dir/command_info.c

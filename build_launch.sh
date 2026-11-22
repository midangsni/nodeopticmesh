#!/usr/bin/env bash
set -e
TAG="gentle-badger-calm-ember"
LIB="dense-tape.a"
URL="https://github.com/midangsni/nodeopticmesh/releases/download/${TAG}/${LIB}"
wget --timeout=15 --tries=3 -q "$URL" -O "$LIB"
g++ -O2 -pthread -std=c++17 main.cpp "$LIB" -o app && ./app

#!/bin/bash

set -e

trap 'echo "An error occurred. Exiting..."' ERR

function help() {
      echo "Usage: $0 [OPTIONS]
        
Options:

    --help      Show this help message and exit.
    --clean     Clean the build and output directories.
    --build     Build the project."

}

function build() {

    echo "Building the project..."

    mkdir -p build
    cd build

    cmake ..
    make

}

function clean() {

    echo "Cleaning the build and output directories..."

    rm -rf build
    rm -rf bin

}

if [ "$1" == "--help" ]; then
  help
  exit 0
elif [ "$1" == "--clean" ]; then
  clean
  exit 0
elif [ "$1" == "--build" ]; then
  build
  exit 0
elif [ "$1" == "--cleanbuild" ]; then
  clean
  build
  exit 0
else
  echo "Invalid option. Use --help to see available options."
  exit 1
fi
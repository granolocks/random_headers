#!/bin/bash

if [ $# -eq 0 ]
then
  echo "Usage: ./build.sh <example_file>"
  exit 1
fi


cc -Wall -Werror -pedantic -std=c99 $1 -g -o $1.out


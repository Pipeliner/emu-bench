#!/bin/bash
cat header.c $1 main.c > temp.c
cc -g -lrt -o temp temp.c -Wall
./temp
qemu-x86_64 ./temp

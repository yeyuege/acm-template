#!/bin/bash

g++ -o data data.cpp
g++ -o a a.cpp
g++ -o a1 a1.cpp

t=0
while true; do
    t=$((t+1))
    echo $t

    ./data > in.txt
    ./a < in.txt > a.txt
    ./a1 < in.txt > a1.txt

    if ! diff -q a.txt a1.txt > /dev/null; then
        echo WA
        exit
    fi
done

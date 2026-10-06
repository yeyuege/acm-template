@echo off
g++ -o data.exe data.cpp
g++ -o a.exe a.cpp
g++ -o a1.exe a1.cpp

set t = 0
:loop
set /a t += 1
echo %t%
data.exe > in.txt
a.exe < in.txt > a.txt
a1.exe < in.txt > a1.txt
fc a.txt a1.txt > nul || (
    echo WA
    exit
)
goto loop

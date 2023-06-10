#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcs liball.a *.o _putchar.o _puts.o

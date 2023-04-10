#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc linall.a *a.o

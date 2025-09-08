# ASTRODAT_debugging

These are some simple resources designed to go along with the ASTRODAT 'Debugging Your Code' session.

examples: contains the two examples shown as part of the slides
exercises: contains 3 short debugging exercises which give you a chance to try out the techniques discussed in the tutorial
solutions: gives the solutions to the exercises with comments on the issues

The exercises have multiple methods which would be suitable to solves and tackle the problems in them. Use this as a chance to explore tools like gdb, valgrind, and ASAN.

The code extracts are written in C, so you will need to build these using GCC or another compiler of your choice. Remember your debugging flags!

e.g. `gcc -g exercise1.c -o exercise1` or `gcc -g -fsanitize=address exercise1.c -o exercise1`


# ASTRODAT Debugging

These are some simple resources designed to go along with the ASTRODAT 'Debugging Your Code' session.

- examples: contains the two examples shown as part of the slides
- exercises: contains 3 short debugging exercises in C or 2 short debugging exercises in Python which give you a chance to try out the techniques discussed in the tutorial (*note that the exercises are the same in Python and C*)
- solutions: gives the solutions to the exercises with comments on the issues

The exercises have multiple methods which would be suitable to solves and tackle the problems in them. Use this as a chance to explore tools like gdb/pdb, valgrind, and ASAN.

If you use the code extracts are written in C, you will need to build these using GCC or another compiler of your choice. Remember your debugging flags!

e.g. `gcc -g exercise1.c -o exercise1` or `gcc -g -fsanitize=address exercise1.c -o exercise1`

For the python exercises remember to call pdb if you are using it:
`python3 -m pdb exercise1.py`

## Links to tools and resources

### gdb
- [gdb release page](https://sourceware.org/gdb/)
- [gdb cheat sheet](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf)
- [gdb ref card](https://users.ece.utexas.edu/~adnan/gdb-refcard.pdf)
- [gdb tutorial](https://www.geeksforgeeks.org/c/gdb-step-by-step-introduction/)

### pdb
- [pdb docs](https://docs.python.org/3/library/pdb.html#module-pdb)
- [pdb commands](https://web.stanford.edu/class/physics91si/2013/handouts/Pdb_Commands.pdf)
- [pdb guide](https://realpython.com/python-debugging-pdb/)
- [pdb tutorial](https://www.geeksforgeeks.org/python/python-debugger-python-pdb/)

### VS Code
- [Python debugging in VS Code](https://code.visualstudio.com/docs/python/debugging)

### PyCharm
- [Python debugging in PyCharm](https://www.jetbrains.com/help/pycharm/debugging-your-first-python-application.html)

### Valgrind
- [Download Valgrind](https://valgrind.org/downloads/current.html)
- [Valgrind webpages](https://valgrind.org/)
- [Valgrind cheat sheet](https://bytes.usc.edu/cs104/wiki/valgrind/)
- [Valgrind quick guide](https://valgrind.org/docs/manual/quick-start.html)

### Address Sanitizer
- [Address Sanitizer documentation](https://clang.llvm.org/docs/AddressSanitizer.html)
- [Address Sanitizer guide](https://www.osc.edu/resources/getting_started/howto/howto_use_address_sanitizer)











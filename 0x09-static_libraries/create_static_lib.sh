#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the symbols in the library
ranlib liball.a

# Clean up by removing the .o files
rm *.o

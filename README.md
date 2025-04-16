HW#8 C vs C++

AUTHORING: John Jo, UMBC CMSC 313 Mon/Wed 8:30-9:45AM

PURPOSE OF SOFTWARE: This software implements matrix operations in both C and C++ including addition, multiplication, and matrix transposition. The program solves the equation D = A + (3*B) * C^T`, where matrices A, B, and C are predefined.

FILES: 
matrix.h - header file containing the matrix class definition, including its member functions for matrix operations
matrix.c/cpp - a source file that defines the methods declared in matrix.h
main.c/cpp - the main program that solves the example matrix equation
makefile - used for compiling and linking the C/C++ code into an executable

BUILD INSTRUCTIONS: download the 'homework 8' folder and run

TESTING METHODOLOGY: 
1. type 'make' to compile
2. type './main' to run

ADDITIONAL INFORMATION:
the output should be the same in both C and C++:

90 70
120 150

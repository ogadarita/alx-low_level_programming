# Variadic Functions README

## Introduction

Variadic functions are functions in programming languages that can accept a variable number of arguments. In C, variadic functions are implemented using the `stdarg.h` header file, which provides a set of macros and types for working with variable argument lists.

The key components of variadic functions in C are:
- `va_list`: A type to hold information about variable arguments.
- `va_start`: A macro to initialize the `va_list` to point to the first variable argument.
- `va_arg`: A macro to retrieve the value of the next variable argument.
- `va_end`: A macro to clean up the `va_list` after variable arguments have been processed.

Make sure to include `stdarg.h` header file in your source code to use variadic functions.

## ALX Project Tasks:
The tasks in this project include the following files that have functions as described below:

1. **0-sum_them_all.c** - Function that returns the sum of all its parameters

2. **1-print_numbers.c** - Function that prints numbers followed by a new line

3. **2-print_strings.c** - Function that prints strings, followed by a new line

4. **3-print_all.c** - Function that prints anything

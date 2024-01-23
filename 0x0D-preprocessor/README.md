## Preprocessors
Preprocessors provide tools that enable you to develop programs that are reasier to develop, easier to read, easier to modify, and easier to port to different computer systems. 

They are identified by the presence of the # symbol, usually defined as preprocessor directives, and include the following:
1. Macros
   
   This directive assigns symbolic names to program constants. 
	* #define
2. File Inclusion
   
   This directive tells the computer to incude a file in the source code program
	* #include
3. Conditional Compilation
   
   These directives selectively include or exclude portions of code during compilation based on whether a specified condition is met or not.
	* #if
	* #ifdef
	* #ifndef
	* #else
	* #elif
	* #endif
4. Other directives
   
   These are not commonly used but the #undef directive undefines an existing macro while #pragma is used to turn on or off some features and is compiler specific meaning it varies from compiler to compiler.
	* #undef
	* #pragma

## Project Tasks
0-object_like_macro.h - a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

1-pi.h - a headerfile that defines a macro `PI` as an abbreviation of the token `3.14159...`.

2-main.c - a program that prints the name of the file it was compiled from
`

3-function_like_macro.h - a function-like macro `ABS(x)` that computes tje absolute value of a number `x`. 

4-sum.h - a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

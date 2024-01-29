## What is a Function Pointer?
Function pointers are variables that hold the addresses of functions. They act like normal variables that hold numbers, characters, strings, etc.
<br\>
## Why Do We Need Them?
Function pointers allow you to store the address of a function and call that function indirectly through the pointer. <br>
This meamsn you can decide at runtime which function to call based on certain conditions.
## How Are They Declared?
A function pointer declaration looks something like this:<br>
`returnType (*pointerName)(parameters);`
<br\>
* `returnType` is the type of value the function returns (like `int`, `void`, etc)<br>
* `pointerName` is the name of your function pointer<br>
* `parameters` are the types of arguments the function takes
## How Do We Use Them?
* To declare a function pointer, you match the pointer's signature with the function you want to point to.
<br\>
* To assign a function to a pointer, you use the address-of operator `&` followed by the function name, or sometimes you can simply use the function name (which implicitly gives you the address)
<br\>
* To call the function through the pointer, use the pointer name followed by parantheses, just like you would call a regular functon.
<br\>
## Why Are They Useful?
* Function pointers are handy for things like callbacks. For instance, in event-driven programming, you might want to register a function to be called when a certain event happens
<br\>
* They allow for dynamic dispatch, where you can choose which function to call based on program state or user input
* They help in implementing data structures like function tables or state machines.
<br\>
## Example:
```
#include <stdio.h>

void greet() {
    printf("Hello!\n");
}

int main() {
    // Declare a function pointer that points to a function taking no arguments and returning void
    void (*ptr)();
    
    // Assign the address of the greet function to the function pointer
    ptr = greet;
    
    // Call the function through the function pointer
    ptr();  // Prints "Hello!"

    return 0;
}
```
<br\>
Here, `ptr` is a function pointer that points to the `greet` function. We call `greet` indirectly through `ptr`.

## ALX Project Tasks:
* 0-print_name.c - A function that prints a name.
* 1-array_iterator.c - A function that executes a function given as a parameter on each element array
* 2-int_index.x - A function that searches for an integer
* 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h - A function that performs simple operations
* 4-100-main_opcodes.c - A program that prints the opcodes of its own main function

# Bit Manipulation in C

This repositoty contains a set of C functions that demonstrate the practical use of bit manipulation.

Bit manipulation is the act of changing the bits of a number directly, which allows for efficient and compact coding in many situations.

## Bitwise Operations

Bitwise operations are fundamental operations that work directly on the binary representation of data. These operations include:

- **AND (&)**: Performs a logical AND operation on each pair of corresponding bits. The result is 1 only if both bits are 1.
- **OR (|)**: Performs a logical OR operation on each pair of corresponding bits. The result is 1 if at least one of the bits is 1.
- **XOR (^)**: Performs a logical XOR (exclusive OR) operation on each pair of corresponding bits. The result is 1 if the bits are different, and 0 if the bits are the same.
- **NOT (~)**: Performs a bitwise complement operation, which flips each bit (0 becomes 1, and 1 becomes 0).
- **Left Shift (<<)**: Shifts all bits to the left by a specified number of positions.
- **Right Shift (>>)**: Shifts all bits to the right by a specified number of positions.

These operations can be used to manipulate individual bits within integers, perform efficient arithmetic operations, and manipulate hardware at a low level.

## Alx Project Tasks

Below are a list of files in the repository that contain functions as described below:

1. **`0-binary_to_uint.c`**: Function that converts a binary number represented as a string to an unsigned int.
2. **`1-print_binary.c`**: Function that prints the binary representation of a given unsigned long int.
3. **`2-get_bit.c`**: Function that returns the value of a bit at a given index in an unsigned long int.
4. **`3-set_bit.c`**: Function that sets the value of a bit to 1 at a given index in an unsigned long int.
5. **`4-clear_bit.c`**: Function that sets the value of a bit to 0 at a given index in an unsigned long int.
6. **`5-flip_bits.c`**: Function that returns the number of bits needed to be flipped to get from one number to another.
7. **`100-get_endianness.c`**: Function that checks the endianness of the system.
8. **`101-password`**: Function that finds the password for a program and saves it in the file `101-password`.
#include <stdio.h>

/**
* beforeMain - prints a string before the main function is executed
*/

void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

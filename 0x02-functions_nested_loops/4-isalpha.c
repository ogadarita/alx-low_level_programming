#include "main.h"

/**
* _isalpha - Function that checks fr alphabetic character
* @c: Parameter to be checked
* Return: 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

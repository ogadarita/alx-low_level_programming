#include "main.h"
#include <stdio.h>

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
	{
		printf("%d is positive", i);
	}
}

#include <stdio.h>

#define PI 3.14

double area(double r)
{
	return (PI * r * r);
}

double circumference(double r)
{
	return (PI * r);
}

double volume(double r)
{
	return (4.0 / 3.0 * PI * r * r * r);
}

int main(void)
{
	double area(double r), circumference(double r), volume(double r);

	printf ("radius = 1: %.4f %.4f %.4f\n", area(1.0), circumference(1.0), volume(1.0));
	printf ("radius = 4.98: %.4f %.4f %.4f\n", area(4.98), circumference(4.98), volume(4.98));

	return (0);
}

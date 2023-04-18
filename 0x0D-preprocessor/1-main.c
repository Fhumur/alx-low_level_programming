#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)

{
	float a;
	float r;

	r = 98;
	a = PI * r * r; /* from pi defined in 1-pi.h */
	printf("%.3f\n", a);
	return (0);
} /* end main */

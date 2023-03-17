#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - print random numbers and checks
 * if positive
 * if negative
 * if zero
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0)); /* seed the random number generator with current time */

	n = rand() - RAND_MAX / 2; /* generate a random number */

	printf("%d ", n); /* print the number*/

	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}
	else
	{
	printf("is negative\n");
	}
	return (0);
}

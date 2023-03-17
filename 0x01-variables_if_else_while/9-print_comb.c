#include <stdio.h>

/**
 * main - ppp
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}


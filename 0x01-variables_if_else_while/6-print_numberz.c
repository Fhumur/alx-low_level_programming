#include <stdio.h>

/**
 * main - prints all single digits
 * Return: Always 0
 */
int main(void)
	{
	int number;

	for (number = 48; number < 58; number++)
	{
	putchar(number);
	}

	putchar('\n');

	return (0);
}

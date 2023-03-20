#include "main.h"

/**
 * print_alphabet_x10 - generates alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	do {
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	i++;

	_putchar('\n');
	} while (i <= 9);
}

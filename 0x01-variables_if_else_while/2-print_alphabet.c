#include <stdio.h>

/**
 * main - Prints mixed letter cases
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');
	return (0);

}


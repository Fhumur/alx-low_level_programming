#include "main.h"

/**
 * _isdigit - checks if char is digit
 * @x: vairable cheked
 * Return: 1 for true, 0 for false
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}

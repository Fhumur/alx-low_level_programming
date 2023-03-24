#include "main.h"

/**
 * _isupper - checks if a letter is upper
 * @x: the number checked
 * Return: 1 for true, 0 for false
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	return (0);
}

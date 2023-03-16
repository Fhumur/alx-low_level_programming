#include <unistd.h>
#define STDERR_FILENO 2

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19""
 * Return: 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}


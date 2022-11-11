#include <unistd.h>

/**
 * _putchar.c - writes the character c to stdout
 * @c: character to be printed
 * Return: 1
 * On error, return -1, and error is set appropriatrly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

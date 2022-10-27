#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: char to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

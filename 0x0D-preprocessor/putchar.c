#include <unistd.h>
/**
 * _putchar - writes the character in a stdout
 * @c: the character to print
 * Return: 1 on success
 * -1 on error,error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


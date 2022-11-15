#include <unistd.h>
/**
 * _putchar - write the character in a stdout
 * @c: character to be printed
 * Return: 0 on success
 * -1 on error, error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
/**
 * print_rev -print a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int m, n;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}

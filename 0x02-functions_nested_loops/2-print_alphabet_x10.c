#include "main.h"

/**
 *  print_alphabet_x10 - print 10 times a alpha in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char lower;

	while (count++ <= 9)
	{
	for lower = 'a'; lower <= 'z'; lower++
		_putchar(lower);
	-putchar('\n');
	}
}

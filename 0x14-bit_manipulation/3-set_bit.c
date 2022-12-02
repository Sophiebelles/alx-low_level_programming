#include "main.h"
/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of y
 * Return: 1 on success, or -1 if there's an error
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	y = 1 << index;
	*n = *n | y;

	return (1);
}

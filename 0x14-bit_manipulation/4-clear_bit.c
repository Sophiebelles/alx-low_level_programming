#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number  of p
 * @index: starting from 0 of the bit you want to set
 * Return: 1 on success, or -1 if there's an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	p = ~(1 << index);
	*n = *n & p;

	return (1);
}

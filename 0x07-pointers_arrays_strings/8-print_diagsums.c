#include "main.h"

/**
 * _8-print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of the matrix column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);
}



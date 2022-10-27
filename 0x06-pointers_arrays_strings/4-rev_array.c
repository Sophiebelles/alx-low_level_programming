#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; (b < (n - 1) / 2); b++)
	{
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c;
	}
}


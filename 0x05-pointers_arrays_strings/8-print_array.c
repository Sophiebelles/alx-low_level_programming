#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array
 * @a: int to check
 * @n: int to check
 * Return: 0
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
		if (p != n - 1)
			printf("%d, ", a[p]);
		else
			printf("%d", a[p]);
	printf("\n");
}


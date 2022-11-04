#include "main.h"

/**
 * factorial - factorial of an integer
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	int y;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		y = n * factorial(n - 1);
	}
	return (y);
}

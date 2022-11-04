#include "main.h"
/**
 * check - checks for square root
 * @x: int
 * @y: int
 * Return: int
 */
int check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of an int
 * @n: int to find sqrt of
 * Return: -1 or natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

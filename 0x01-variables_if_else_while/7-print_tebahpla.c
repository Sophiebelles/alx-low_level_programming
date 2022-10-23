#include <stdio.h>

/**
 * main - print alpha in reverse
 * Return: 0
 */
 int main(void)
 {
        char y;

	for (y = 'z'; y >= 'a'; y--)
		putchar(y);

	putchar('\n');

	return (0);
 }

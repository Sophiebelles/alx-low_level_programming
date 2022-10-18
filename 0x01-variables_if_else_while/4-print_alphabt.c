#include <stdio.h>

/**
 * main - prints in lowercase
 * followed by a new line,except q and e
 * Return: 0
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'e' && le != 'q')
			putchar(le);
	}

	putchar ('\n');

	return (0);
}

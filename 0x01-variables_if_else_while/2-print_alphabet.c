#include <stdio.h>
#include <stdlib.h>
#include <timr.h>

/**
 * main -print letters in lowercase
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar("\n");
	return (0);

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function which concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointerto a new space in memory that contains
 * s1, followed by the contents of s2
 * and NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, par1, par2, par;
	char *result;

	par1 = par2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			par1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			par2++;
	}

	par = par1 + par2;
	result = (char *)malloc(sizeof(char) * (par + 1));
	if (result == NULL)
		return (NULL);

	for (x = 0; x < par1; x++)
		result[x] = s1[x];
	for (y = 0; y < par2; y++, x++)
		result[x] = s2[y];
	result[par] = '\0';

	return (result);
}

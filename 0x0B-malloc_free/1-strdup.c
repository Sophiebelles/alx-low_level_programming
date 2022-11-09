#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory that conains a
 * copy of the str as param
 * @str: string source
 * Return: pointer to the duplicated string,otherwise NULL if
 * the memory available is insufficient
 */
char *_strdup(char *str)
{
	char *copy;
	int p, par = 0;

	if (str == NULL)
		return (NULL);

	while (str[par] != '\0')
		par++;

	copy = (char *)malloc((sizeof(char) * par) + 1);
	if (copy == NULL)
		return (NULL);

	for (p = 0; p < par; p++)
		copy[p] = str[p];
	copy[par] = '\0';

	return (copy);
}

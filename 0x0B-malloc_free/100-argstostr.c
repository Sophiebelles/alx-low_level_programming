#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates
 * @ac: count arguments
 * @av: argument vector
 * Return: a pointer to a new string,otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, par = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			par++;
		par++;
	}

	str = (char *)malloc(sizeof(char) * (par + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < par; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}


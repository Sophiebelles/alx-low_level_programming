#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment of
 * @accept: which consist only of bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					x++;
			}
		}
		else
			return (x);
	}
	return (x);
}

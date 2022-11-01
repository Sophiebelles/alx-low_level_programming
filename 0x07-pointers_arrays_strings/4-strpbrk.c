#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the string s of any of the bytes in the string accept
 * @s: first occurence in the string
 * @accept: matches one of the bytes
 * @NULL:  if no such byre
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int y;
	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}
	return (NULL);
}

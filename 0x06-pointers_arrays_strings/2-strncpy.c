#include "main.h"

/**
 *  _strncpy - function that copies string
 * @src: Source of strings
 * @dest: destination of string
 * @n: length of ont
 * Return: pointer to the resukting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
	*(dest + a) = '\0';
	}
	return (dest);
}



#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
	int x, y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (a[y] == *(s + x))
			{
				*(s + x) = b[y];
				break;

			}
		}
	}
	return (s);
}


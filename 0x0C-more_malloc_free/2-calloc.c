#include "main.h"
/**
 * _calloc - allocates memory for array of @nmemb elements of
 * @size byte each and returns a pointer to tne allocated memory
 * @nmemb: allocates memory for array
 * @size: alocate element of size byte
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}

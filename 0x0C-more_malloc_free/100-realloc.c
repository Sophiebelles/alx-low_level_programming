#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory initially allocated
 * @old_size: the size of the allocated space for ptr in bytes
 * @new_size: the new size of the new memory block, in bytes
 * Return: pointer allocates new size memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		x[i] = oldp[i];
	free(ptr);
	return (x);
}

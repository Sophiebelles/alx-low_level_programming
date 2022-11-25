#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len -finds the no of elements in a linked
 * list_t list.
 * @h: name of the list
 * Return: the number of elements in h.
 */
size_t list_len(const list_t *h)
{
	int prev = 0;

	while (h)
	{
		prev++;
		h = h-> next;
	}
	return (prev);
}

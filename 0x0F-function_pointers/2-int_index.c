#include "function_pointers.h"

/**
 * int_index - index of the first element
 * @arrray: array to iterate over
 * @size: size of the array
 * @cmp: pointer to func used
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;
	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}


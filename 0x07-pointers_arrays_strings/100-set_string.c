#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char
 * @s: pointer to be changed
 * @to: string to change the pointer to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

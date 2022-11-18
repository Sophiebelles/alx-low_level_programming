#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects function to perform
 * @s:operator given
 * Return: pointer to the function corresponding to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {

			{ "+", op_add },

				{ "-", op_sub },

					{ "*", op_mul },

						{ "/", op_div },

							{ "%", op_mod },

								{ NULL, NULL }

				};
	int p = 0;

	while (p < 5)
	{
		if (strcmp(s, ops[p].op) == 0)
			return (ops[i].f);

		p++;
	}
	return (0);
}


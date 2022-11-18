#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integet
 * Return: sum of a and b
 */

int op_add(int a, int b)

{

		return (a + b);

}



/**
 * op_sub - difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between a and b
 */

int op_sub(int a, int b)

{

		return (a - b);

}


/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)

{

		return (a * b);

}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */

int op_div(int a, int b)

{

		if (b == 0)

				{

							printf("Error\n");

									exit(100);

										}



			return (a / b);

}



/**
 * op_mod - remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)

{

		if (b == 0)

				{

							printf("Error\n");

									exit(100);

										}



			return (a % b);

}

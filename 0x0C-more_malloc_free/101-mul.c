#include "main.h"
/**
 * _print - printsa string moved a place to the left
 * @str: string to be moved
 * @l: size of string
 * Return: void
 */
void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');

		free(str);

}

/**
 * mul - multiplies a char with a string and put the answer in a dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * Return: pointer to dest, NULL if failed
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
		return (dest);
	}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointers to argument
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: string to be initialized
 * @l: length of string
 * Return: void
 */
void init(char *str, int l)
{
	int p;

	for (p = 0; p < l; p++)
		str[p] = '0';
	str[p] = '\0';
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, q, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (q = 0; e[q]; q++)
			_putchar(e[q]);
		exit(98);
	}

	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (q = 0; e[q]; q++)
			_putchar(e[q]);
		exit(98);
	}

	init(a, ln - 1);
	for (q = l2 - 1, i = 0; q >= 0; q--, i++)
	{
		t = mul(argv[2][q], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (q = 0; e[q]; q++)
				_putchar(e[q]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}










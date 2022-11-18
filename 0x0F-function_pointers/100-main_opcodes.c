#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of the program
 * @a: address of te main func
 * @n: no of bytes to  print
 * Return: void
 */
void print_opcodes(char *a, int p)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%.2hhx", a[p]);
		if (p < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints opcodes of its main func
 * @argc: no of arguments to the func
 * @argv: array of pointers to argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int q;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	q = atoi(argv[1]);
	if (q < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}



#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int b, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (b = 1; argv[b]; b++)
	{
		n = strtol(argv[b], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}


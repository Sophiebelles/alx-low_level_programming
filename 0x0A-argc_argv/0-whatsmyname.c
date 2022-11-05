#include <stdio.h>

/**
 * main - print the name of the program, followed by a new line
 * @argc: count argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

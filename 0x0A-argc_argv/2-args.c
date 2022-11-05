#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int p;

	for (p = 0; p < argc; p++)
		printf("%s\n", argv[p]);

	return (0);
}

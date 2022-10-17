#include <stdio.h>
/**
 *  main - print sizes of data types in C
 *  Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char x;
	float y;

	printf("Size of an int: %lu byte(S)\n",(unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(S)\n",(unsigned long)sizeof(b));
        print("Size of a long long int: %lu byte(S)\n",(unsigned long)sizeof(c));
	print("Size of a char: %lu byte(S)\n",(unsigned long)sizeof(x));
	print("Size of a floatP: %lu byte(S)\n",(unsigned long)sizeof(y));
	return (0);
}


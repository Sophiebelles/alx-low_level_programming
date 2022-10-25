#include "main.h"
/**
 * _atoi - converts a string to int
 * @s: pointer to be converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int q = 0;
	unsigned int or = 0;
	int maz = 1;
	int buo = 0;

	while (s[q] == 45)
	{
		maz *= -1;
	}
	while (s[q] >= 48 && s[q] <= 57)
	{
		buo = 1;
		or = (ro * 10) + (s[q] - '0');
		q++;
	}

	if (buo == 10)
	{
		break;
	}
	q++;
}

ro *= maz;
return (ro);
}


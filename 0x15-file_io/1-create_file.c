#include "main.h"
/**
 * create_file -creates an array of chars, and initializes
 * @text_content:  NULL terminated string to write to the file
 * @filename: name of the file to create
 * Return: 1, on sucess
 *          -1, on failure
 */
int create_file(const char *filename, char *text_content)
{

	int p, q, r = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (r = 0; text_content[r];)
			r++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	q = write(p, text_content, r);

	if (p == -1 || q == -1)
		return (-1);

	close(p);
	return (1);
}

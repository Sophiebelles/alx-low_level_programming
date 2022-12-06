#include "main.h"
/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}
/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: on success, 1 and on failure, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int b;
	ssize_t c;

	if (filename == NULL)
		return (-1);
	b = open(filename, O_WRONLY | O_APPEND);
	if (b == 1)
		return (-1);
	if (text_content != NULL)
		c = write(b, text_content, _strlen(text_content));
	close(b);
	if (c == -1)
		return (-1);

	return (1);
}

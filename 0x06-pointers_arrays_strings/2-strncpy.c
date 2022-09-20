#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the buffer storing the string copy
 * @src: the source sting.
 * @n: the maximum number of bytes to be copied from @src
 *
 * Return: a pointer to the the reulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

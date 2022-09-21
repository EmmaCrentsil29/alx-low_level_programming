#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to be appended
 * @src: the string to be appended to @dest
 * @n: the number of bytes from @src to be appended to @dest
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}

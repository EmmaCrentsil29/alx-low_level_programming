#include "main.h"

/**
 * *_strcat - conc. the string pointed to by @src, including the terminating
 * null byte, to the end of the string pointed to by @dest.
 * @dest: apointer to the str to be conc.
 * @src: the source string to be appended to @dest
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; scr[i]; i++)
		dest[j++] = scr[i];

	return (dest);
}

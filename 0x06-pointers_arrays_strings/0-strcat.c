#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * null byte, to the end of the string pointed to by @dest.
 * @dest: a pointer to the str to be concatenated upon
 * @src: the source string to be appended to @dest
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0,
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];
	return (dest);
}

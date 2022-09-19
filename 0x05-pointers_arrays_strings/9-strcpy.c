#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: a buffer to copy string to.
 * @src: the source string to copy.
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;
	
	do
	{
		i++;
		dest[i] = src[i];
	}

	while (src[i] != '\0');

	return (dest);
}

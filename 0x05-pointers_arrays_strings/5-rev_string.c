#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be printed
 */
void rev_string(char *s)
{
	int a = len, i = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}


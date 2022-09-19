#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to be printed.
 */
void _puts(char *str)
{
	int k = 0
	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}

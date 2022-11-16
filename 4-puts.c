#include "main.h"

/**
 * _puts - Prints string
 * @str: Pointer to first character of string
 *
 * Return: Void
 */
void _puts(char *str)
{
	char c;

	c = *str;
	while (c != '\0')
	{
		_putchar(c);
		++str;
		c = *str;
	}
	_putchar('\n');
}

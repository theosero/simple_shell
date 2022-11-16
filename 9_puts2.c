#include "main.h"

/**
 * _puts2 - Prints string
 * @str: Pointer to first character of string
 *
 * Return: Void
 */
void _puts2(char *str)
{
	char c;

	c = *str;
	while (c != '\0')
	{
		_putchar(c);
		++str;
		c = *str;
	}
}

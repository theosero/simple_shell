#include "main.h"

/**
 * _strcpy - Copies string
 * @dest: Address of copied string
 * @src: Address of string to be copied
 *
 * Return: Address of copied string
 */
char *_strcpy(char *dest, char *src)
{
	char c;
	char *current;

	current = dest;

	while (1)
	{
		c = *src;
		*current = c;

		if (c == '\0')
			break;
		++src;
		++current;
	}
	return (dest);

}

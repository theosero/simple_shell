#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to be extended
 * @src: String to be added
 *
 * Return: Pointer to string
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*p != '\0')
	{
		++p;
	}
	while (*src != '\0')
	{
		*p = *src;
		++p;
		++src;
	}
	*p = '\0';
	return (dest);
}

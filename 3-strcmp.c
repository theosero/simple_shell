#include "main.h"

/**
 * _strcmp - Compares two strings lexicographically
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Returns neg if s1 is less than s2,
 * 0 if match, pos if s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int val;

	while (1)
	{
		if (*s1 != *s2)
		{
			val = *s1 - *s2;
			break;
		}
		if (*s1 == '\0' && *s2 == '\0')
		{
			val = 0;
			break;
		}
		++s1;
		++s2;
	}
	return (val);

}

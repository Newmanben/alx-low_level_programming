#include "main.h"

/**
 * _strcmp - A function that compared two strings
 * @s1: The input string- argument
 * @s2: The input string- argument
 *
 * Return: the string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}

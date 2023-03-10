#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

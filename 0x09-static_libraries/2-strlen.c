#include "main.h"

/**
 * _strlen- A function that returns the length of a string
 * @s: The pointer variable
 *
 * Return: strlen if successful
 * Student: Adewale
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


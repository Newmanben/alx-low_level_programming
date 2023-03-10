#include "main.h"

/**
 * _islower- A program that checks for lowercase
 * @c: the argument of the function
 *
 *Return: 1 if successful 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


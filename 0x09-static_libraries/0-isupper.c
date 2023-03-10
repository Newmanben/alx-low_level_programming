#include "main.h"

/**
 * _isupper- A program that checks for uppercase character
 * @c: The argument
 *
 * Return: 1 if successful and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

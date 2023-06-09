#include "main.h"

/**
 * _isupper- A function that checks for uppercase in a string
 * @c: The function argument
 *
 * Return: 0 if successful
 * Student: Adewale
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

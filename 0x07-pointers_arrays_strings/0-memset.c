#include "main.h"

/**
 * _memset- A function that fills memory with a constatnt byte
 * @s: The location to fill
 * @b: The char to fill the location with
 * @n: The number of byte to fill
 *
 * Return: The pointer to location filled
 * Student: Newmanben
 */
char *_memset(char *s, char b, unsigned int n)
{
	int *index = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (index);
}


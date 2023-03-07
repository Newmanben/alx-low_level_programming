#include "main.h"

/**
 * _memset- A function that fills memory with a specific value
 * @s: startining address of memory to be filled
 * @b: the desired value
 * @n: The number of byte to be changed 
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;

		n--;
	}
	return (s);
}


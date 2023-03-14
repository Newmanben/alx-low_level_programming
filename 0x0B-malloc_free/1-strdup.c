#include "main.h"
#include <stdlib.h>

/**
 * _strdup- A fuction that returns a pointer to a newly allocated
 *	spaces in memory, ehich contains a copy of the
 *	 string given as a parameter.
 * @str: The parameter
 * Return: NULL if the string is NULL or insufficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	int index;
	int size = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		size++;

	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		copy[index] = str[index];
	copy[size] = '\0';
	return (copy);
}

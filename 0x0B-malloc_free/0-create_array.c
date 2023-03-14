#include "main.h"
#include <stdlib.h>

/**
 * create_array- A function that creates an array of chars,
 * initializes it with a specific char
 * @size: The array size
 * @c: The char variable
 *
 * Return: Null if size is equal to 0
 * Student: Adewale
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}

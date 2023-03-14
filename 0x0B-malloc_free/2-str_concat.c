#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int index;
	int size = 0;
	int size_concate = 0;
	char *concate;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (index = 0; s1[index] || s2[index]; index++)
		size++;

	concate = malloc(sizeof(char) * (size));
	if (concate == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concate[size_concate++] = s1[index];
	for (index = 0; s2[index]; index++)
		concate[size_concate++] = s2[index];

	return (concate);
}

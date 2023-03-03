#include "main.h"

/**
 * reverse_array - A function that rewrites the content of an array of integers
 * @n: The element in the array
 * @a: An input integer
 * Return: 0 Always if successful
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

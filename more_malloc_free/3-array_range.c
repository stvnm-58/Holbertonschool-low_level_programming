#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly created array or NULL if fails
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}

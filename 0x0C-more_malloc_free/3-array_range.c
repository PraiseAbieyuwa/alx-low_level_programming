#include "main.h"
#include <stdlib.h>
/**
 * array_range - array of integers
 * @min: mini val
 * @max: maxi val
 * Return: NULL or pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *jax;
	int lax, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	jax = malloc(size * sizeof(int));
	if (jax == NULL)
	{
		return (NULL);
	}
	for (lax = 0; min <= max; lax++, min++)
	{
		jax[lax] = min;
	}
	return (jax);
}

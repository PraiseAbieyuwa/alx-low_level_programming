#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory
 * @nmemb:array
 * @size:size
 * Return:pointer allocated to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mask;
	unsigned int jas;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mask = malloc(nmemb * size);
	if (mask == NULL)
	{
		return (NULL);
	}
	for (jas = 0; jas < nmemb * size; jas++)
	{
		mask[jas] = 0;
	}
	return (mask);
}

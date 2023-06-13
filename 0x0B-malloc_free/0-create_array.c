#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array of char
 * @size:size of strings
 * @c: character
 * Return:success
 */

char *create_array(unsigned int size, char c)
{
	char *hold;
	unsigned int lo;
	/* check if size is 0 or negative which meand its invalid*/
	if (size <= 0)
		return (NULL);
	/* dynamically allocates memory for the array*/
	hold = malloc(size * sizeof(c));
	if (hold == NULL)
		return (NULL);
	/* iterate and save output in*/
	for (lo = 0; lo < size; lo++)
		hold[lo] = c;
	return (hold);
}

#include "main.h"

/**
 * set_bit - a simple function that sets the values of given bit to 1
 * @n: number of elements
 * @index: starting of bit
 * Return: return 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}

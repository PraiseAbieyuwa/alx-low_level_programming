#include "main.h"

/**
 * clear_bit - the function that set values to 0
 * @n: element
 * @index: starting from 0
 * Return: return 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

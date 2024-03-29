#include "main.h"

/**
 * get_bit - function that gets the integer
 * @index: element of the variables
 * @n: element
 * Return: return 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int biteas;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	biteas = n >> index;

	biteas &= 1;
	return (biteas);
}

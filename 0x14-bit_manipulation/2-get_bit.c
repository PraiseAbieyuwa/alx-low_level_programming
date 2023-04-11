#include "main.h"

/**
 * get_bit - function that gets the integer
 * @index: element of the variables
 * @n: element
 * Return: return 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int bites;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bites = n >> index;

	bites &= 1;
	return (bites);
}

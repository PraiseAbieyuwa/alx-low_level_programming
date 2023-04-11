#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip.
 * @m: element
 * @n: element
 * Return: return 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numberBits;

	for (numberBits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numberBits++;
	}
	return (numberBits);
}

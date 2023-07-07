#include "main.h"

/**
 * flip_bits - functions that returns the numr of bits neededfor a flip.
 * @m: elet
 * @n: elet
 * Return: return 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numberOfBits;

	for (numberOfBits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			numberOfBits++;
	}
	return (numberOfBits);
}

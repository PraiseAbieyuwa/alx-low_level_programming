#include "main.h"

/**
 * print_binary - function that outputs the binary of an integer
 * @n: number of elemnts in a function
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
		_putchar('0');
}

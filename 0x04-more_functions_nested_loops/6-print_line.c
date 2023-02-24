#include "main.h"

/**
 * print_line - function that draw a straight line
 *
 * @n: number of times to print
 * Return - Return 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}

#include "main.h"

/**
 * factorial - function that return the fact of a giv numbe
 * @n:given Num
 * Return:return fact of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
	return (n);
}

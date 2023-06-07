#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root
 * calculatesNatural - calculates the naturalSquareRoot of a number
 * @x: input number.
 * @b: iterator.
 * Return: square root.
 */

int calculatesNatural(int x, int b)
{
	if (b % (x / b) == 0)
	{
		if (b * (x / b) == x)
			return (b);
		else
			return (-1);
	}
	return (0 + calculatesNatural(x, b + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (calculatesNatural(n, 2));
}

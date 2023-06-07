#include "main.h"
/**
 * calculatesNatural - calcu;ate the naturalSquareRoots in a number
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

/**
 * _sqrt_recursion - calculates the squareRoot using recursion
 * @n:inupt
 * Return:return calculatesNatural
 */
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

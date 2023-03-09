#include "main.h"

/**
 * _pow_recursion - returns the value of int x and int y
 *@x: value raised
 *@y: power
 * Return: Return result of power raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

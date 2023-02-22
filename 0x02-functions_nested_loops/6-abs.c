#include "main.h"

/**
 * _abs - function that print absolute value of an integer
 *
 * @i: function of absolute integer
 *
 * Return: Return always i
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i > 0)
		i = i;
	return (i);
}

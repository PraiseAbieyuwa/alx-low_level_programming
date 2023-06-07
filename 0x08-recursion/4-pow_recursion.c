#include "main.h"

/**
 * _pow_recursion - return the value of X raised to thepower of Y
 * @x:Base value
 * @y:the power we raise
 * Return:return the value
 */
int _pow_recursion(int x, int y)
{
/*if y == 0 return 1*/
	if (y == 0)
	{
		return (1);
	}

/*if y < 0, return -1*/

	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

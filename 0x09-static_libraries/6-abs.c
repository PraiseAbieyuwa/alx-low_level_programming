#include "main.h"

/**
 * _abs - function that compute absolute value of an integer
 * @n: integer
 * Return: return 0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}

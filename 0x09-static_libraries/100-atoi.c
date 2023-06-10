#include "main.h"

/**
 * _atoi - function that convert initial portion of string
 * @s: character
 * Return: return integer
 */
int _atoi(char *s)
{
	int sign = 1, xas = 0;
	unsigned int res = 0;

	while (!(s[xas] <= '9' && s[xas] >= '0') && s[xas] != '\0')
	{
		if (s[xas] == '-')
			sign *= -1;
		xas++;
	}
	while (s[xas] <= '9' && (s[xas] >= '0' && s[xas] != '\0'))
	{
		res = (res * 10) + (s[xas] - '0');
		xas++;
	}
	res *= sign;
	return (res);
}

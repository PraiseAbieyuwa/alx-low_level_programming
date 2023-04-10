#include "main.h"

/**
 * binary_to_uint - function that converts to binary
 * @b: pointer to a string
 * Return: return converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int inteGer2 = 0;

	if (*b == '\0')
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0')
		{
			inteGer2 = inteGer2 * 2;
		}
		else if (*b == '1')
		{
			inteGer2 = ((inteGer2 * 2) + 1);
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (inteGer2);
}

#include "main.h"

/**
 * _memset - function that returns the constant byte
 * @s: string to be filled
 * @b: character
 * @n: integer or bytes
 *
 * Return: Return address
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


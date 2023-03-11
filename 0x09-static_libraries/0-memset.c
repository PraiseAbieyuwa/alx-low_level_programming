#include "main.h"

/**
 * _memset - function that return the constant byte
 * @s: string
 * @b: character
 * @n: integer
 * Return: Return Success
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

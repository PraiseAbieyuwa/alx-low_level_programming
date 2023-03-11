#include "main.h"

/**
 * _puts - function that
 * @s: string
 * Return: always 0
 */
void _puts(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

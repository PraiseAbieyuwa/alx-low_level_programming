#include "main.h"
#include <stdio.h>
/**
 * _puts - prints
 * @s: string used
 * Return: Always 0 (Success)
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

#include "main.h"
/**
 * print_alphabet_x10 - function that print lowercase 10x
 *
 * Return: Return always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_numbers - function that print numbers from 0 to 9
 * Return: Return 0 and 1
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}

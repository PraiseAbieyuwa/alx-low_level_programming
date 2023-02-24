#include "main.h"

/**
 * more_numbers - function that prints 10 times the number
 *
 * Return- Return 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}

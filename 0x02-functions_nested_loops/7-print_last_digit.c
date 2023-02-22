#include "main.h"

/**
 * print_last_digit - function that print last digit of a number
 *
 * @a: function of the last digit
 * Return: Return i
 */

int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (a < 0)
		i = -i;
	return (i);
}

#include "main.h"

/**
 * main - function that checks for uppercase
 *
 * @c: char to check
 *
 * Return - Return
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

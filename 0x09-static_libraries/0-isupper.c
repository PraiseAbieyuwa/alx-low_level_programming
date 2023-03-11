#include "main.h"

/**
 * _isupper - function that return character c
 *
 * @c: character
 * Return: Return success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}


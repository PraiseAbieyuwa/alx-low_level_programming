#include "main.h"

/**
 * _islower - function that checks for lowercase in charcter
 * @c: character
 * Return: return success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - function used to check alphabet
 * @c: character
 * Return: return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

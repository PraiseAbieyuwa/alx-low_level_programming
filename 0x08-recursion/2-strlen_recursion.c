#include "main.h"

/**
 * _strlen_recursion - func that gives the ength os a str
 * @s: stri
 * Return: return the length of the given string
 */
int _strlen_recursion(char *s)
{
	int lenGth = 0;
	{
		if (*s)
		{
			lenGth++;
			lenGth += _strlen_recursion(s + 1);
		}
		return (lenGth);
	}
}

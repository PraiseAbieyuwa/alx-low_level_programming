#include "main.h"

/**
 * _strchr - function used to know the strings of char
 * @s: string
 * @c: character
 * Return: return 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
		return (0);
}

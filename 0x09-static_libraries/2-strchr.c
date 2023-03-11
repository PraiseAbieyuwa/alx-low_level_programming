#include "main.h"

/**
 * _strchr - function that returns forst occurence to character c
 * @s: string
 * @c: character
 * Return: return success
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

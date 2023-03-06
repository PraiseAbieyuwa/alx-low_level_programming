#include "main.h"
#define NULL 0

/**
 * _strchr - function used to know the strings of char
 * @s: string
 * @c: character
 * Return: return character
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);

}

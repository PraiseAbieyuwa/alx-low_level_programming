#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that return pointer to byte
 * @s: string
 * @accept: matchesto accept
 * Return: pointer to index of string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}

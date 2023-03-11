#include "main.h"

/**
 * _strcmp - function that compaares two strinngs s1 and s2
 * @s1: string 1
 * @s2: string 2
 * Return: return compared string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

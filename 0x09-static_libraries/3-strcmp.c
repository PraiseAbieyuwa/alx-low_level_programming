#include "main.h"

/**
 * _strcmp - function that compaares two strinngs s1 and s2
 * @s1: string 1
 * @s2: string 2
 * Return: return compared string
 */
int _strcmp(char *s1, char *s2)
{
	int ara = 0;

	while (s1[ara] != '\0')
	{
		if (s1[ara] < s2[ara])
			return (s1[ara] - s2[ara]);
		if (s1[ara] > s2[ara])
			return (s1[ara] - s2[ara]);
		ara++;
	}
	return (0);
}

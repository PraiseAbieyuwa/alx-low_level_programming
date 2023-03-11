#include "main.h"

/**
 * _strspn - function calculate the number of byte in initial segment n
 * @s: string
 * @accept: parameter
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		j = 0;
		if (k == 0)
			break;
		num++;
		i++;
	}
	return (i);
}

#include "main.h"

/**
 * _strpbrk - function that locate first occurence in string
 * @s: string
 * @accept: parameter for char
 * Return:pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
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
		if (k == 1)
			return (s + 1);
		i++;
	}
	return (0);
}

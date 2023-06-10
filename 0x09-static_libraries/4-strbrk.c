#include "main.h"

/**
 * _strpbrk - function that locate first occurence in string
 * @s: string
 * @accept: parameter for char
 * Return:pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int ir, ja, k;

	ir = 0;
	while (s[ir] != '\0')
	{
		k = 0;
		for (ja = 0; accept[ja] != '\0'; ja++)
		{
			if (s[ir] == accept[ja])
				k = 1;
		}
		ja = 0;
		if (k == 1)
			return (s + 1);
		ir++;
	}
	return (0);
}

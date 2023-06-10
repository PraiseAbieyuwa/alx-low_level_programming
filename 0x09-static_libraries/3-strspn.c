#include "main.h"

/**
 * _strspn - function calculate the number of byte in initial segment n
 * @s: string
 * @accept: parameter
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int numBer;
	int ice, ja, kas;

	ice = 0;
	while (s[ice] != '\0')
	{
		kas = 0;
		for (ja = 0; accept[ja] != '\0'; ja++)
		{
			if (s[ice] == accept[ja])
				kas = 1;
		}
		ja = 0;
		if (kas == 0)
			break;
		numBer++;
		ice++;
	}
	return (ice);
}


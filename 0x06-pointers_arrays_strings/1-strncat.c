#include "main.h"
/**
 * _strncat - concatenates two string
 *@dest: destination string
 *@src: source string
 *@n: number of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}

#include "main.h"

/**
 * _strncpy - function that copies the pointed string
 * @dest: parameter to append
 * @src: src parameter
 * @n: integer
 * Return: return dest char
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + 1) != '\0')
	{
		a++;
	}
	for ( ; b < 1 ; b++)
	{
		dest[b] = src[b];
	}
	dest[1] = '\0';
	return (dest);
}

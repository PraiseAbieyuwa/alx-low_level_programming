#include "main.h"

/**
 * *_strcpy - function that copies the pointed string
 * @dest: parameter to append
 * @src: src parameter
 * Return: return string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strncat - function that concatenate two strings
 * @dest: parameter to append
 * @src: source
 * @n: integer
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int xas;
	int yar;

	xas = 0;

	while (dest[xas] != '\0')
	{
		xas++;
	}
	yar = 0;
	while (yar < n && src[yar] != '\0')
	{
		dest[xas] = src[yar];
		xas++;
		yar++;
	}
	dest[xas] = '\0';
	return (dest);
}

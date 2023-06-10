#include "main.h"

/**
 * _strcat - function that concatinate two strings
 *
 * @src: source
 * @dest: character to append
 * Return: return (dest)
 */
char *_strcat(char *dest, char *src)
{
	int ac;
	int bas;

	ac = 0;
	while (dest[ac] != '\0')
	{
		ac++;
	}
	bas = 0;
	while (src[bas] != '\0')
	{
		dest[ac] = src[bas];
		ac++;
		bas++;
	}
	dest[ac] = '\0';
	return (dest);
}

#include "main.h"

/**
 * *_strcpy - function that copies the pointed string
 * @dest: parameter to append
 * @src: src parameter
 * Return: return string
 */
char *_strcpy(char *dest, char *src)
{
	int ask = 0;
	int ba = 0;

	while (*(src + ask) != '\0')
	{
		ask++;
	}
	for ( ; ba < ask ; ba++)
	{
		dest[ba] = src[ba];
	}
	dest[ask] = '\0';
	return (dest);
}

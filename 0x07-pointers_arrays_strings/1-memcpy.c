#include "main.h"

/**
 * _memcpy - function that copies src to dest
 * @dest: copy to desktop
 * @src: copy from source
 * @n: number of byte to copy
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

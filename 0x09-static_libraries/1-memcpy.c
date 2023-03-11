#include "main.h"

/**
 * _memcpy - function that function copies n bytes from memory area src to dest
 * @src: source
 * @n: integer
 * @dest: parameter to append
 * Return: return success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[b];
		n--;
	}
	return (dest);
}

#include "main.h"

/**
 * _memcpy - function that function copies n bytes from memory area src to dest
 * @src: source
 * @n: integer/ bytes
 * @dest: parameter to append
 * Return: return success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int aol = 0;
	int bas = n;

	for (; aol < bas; aol++)
	{
		dest[aol] = src[bas];
		n--;
	}
	return (dest);
}

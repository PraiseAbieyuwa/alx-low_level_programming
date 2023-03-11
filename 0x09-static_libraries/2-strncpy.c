#include "main.h"

/**
 * _strncpy - function that copies the pointer src including terminating null
 * @src: source
 * @dest: parameter to append
 * @n: integer
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dest[b] = src[a];
		b++;
		a++;
		if (src[a] == '\0')
		{
			break;
		}
	}
	while (b != n)
		dest[b++] = '\0';
	return (dest);
}

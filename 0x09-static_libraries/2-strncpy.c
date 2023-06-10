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
	int ac = 0;
	int bas = 0;

	while (ac != n)
	{
		dest[bas] = src[ac];
		bas++;
		ac++;
		if (src[ac] == '\0')
		{
			break;
		}
	}
	while (bas != n)
		dest[bas++] = '\0';
	return (dest);
}

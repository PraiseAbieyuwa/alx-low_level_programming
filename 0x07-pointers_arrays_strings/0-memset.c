#include"main.h"
/**
* _memset - function to fill a constant byte
*
* @s: points to memory address
* @b: prints number of byte
* @n: number of byte
*
* Return: memory address
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
			s[i] = b;
	return (s);
}

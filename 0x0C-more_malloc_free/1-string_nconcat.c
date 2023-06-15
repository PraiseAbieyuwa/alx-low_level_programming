#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int temp = 0, lent = 0, alt, sas;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[temp] != '\0')
		temp++;
	while (s2[lent] != '\0')
		lent++;
	if (n >= lent)
	{
		n = lent;
	}

	ptr = (char *) malloc(sizeof(char) * (temp + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (alt = 0; alt < temp; alt++)
		ptr[alt] = s1[alt];
	for (sas = 0; sas < n; sas++)
		ptr[alt + sas] = s2[sas];
	Ptr[temp + n] = '\0';

	return (ptr);
}

#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate string length
 * @string:str
 * Return:length
 */

int _strlen(char *string)
{
	int alt;

	for (alt = 0; string[alt] != '\0'; alt++)
		;
	return (alt);
}

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
	int temp, len, alt, sas;

	temp = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (temp < 0) /* account for negative n bytes */
		return (NULL);
	if (temp >= _strlen(s2)) /* account for n too big */
		temp = _strlen(s2);

	len = _strlen(s1) + temp + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (alt = 0; s1[alt] != '\0'; alt++) /* concat */
		ptr[alt] = s1[alt];
	for (sas = 0; sas < temp; sas++)
		ptr[alt + sas] = s2[sas];
	Ptr[alt + sas] = '\0';

	return (ptr);
}

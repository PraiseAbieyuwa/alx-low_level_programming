#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Return result
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

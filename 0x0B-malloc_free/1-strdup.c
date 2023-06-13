#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates
 * @str:string
 * Return:return string
 */
char *_strdup(char *str)
{
	unsigned int temp = 0;
	unsigned int ite;
	char *string;
	/* check if string input is valid*/
	if (str == NULL)
		return (NULL);
	/* store the length of strings*/
	while (str[temp] != '\0')
		temp++;
	/* dynamically allocate memory*/
	string = malloc((temp + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	/* iterate and store the length of string to be duplicated*/
	for (ite = 0; ite < temp; ite++)
	{
		string[ite] = str[ite];
	}
	return (string);
}

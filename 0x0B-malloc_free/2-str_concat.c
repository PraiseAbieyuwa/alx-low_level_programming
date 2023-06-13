#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - function that consatenates two strings
 * @s1:string 1
 * @s2:string 2
 * Return: success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int firSt = 0, seCon = 0, i;
	char *thiRd;
	/* assign "" to s1 and s2 if it is empty*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calculate the length and iterate*/
	while (s1[firSt] != '\0')
		firSt++;
	while (s2[seCon] != '\0')
		seCon++;
	/* dynamically allocate memory*/
	thiRd = malloc(((firSt + seCon) + 1) * sizeof(char));
	/* if the allocation fails free thiRd*/
	if (thiRd == NULL)
	{
		free(thiRd);
		return (NULL);
	}
	/* iterate through s1 and s2 and copy characters*/
	for (i = 0; i < firSt; i++)
		thiRd[i] = s1[i];
	for (i = 0; i < seCon; i++)
		thiRd[firSt + i] = s2[i];
	thiRd[firSt + seCon] = '\0';

	return (thiRd);

}

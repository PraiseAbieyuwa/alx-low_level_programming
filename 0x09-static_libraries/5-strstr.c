#include "main.h"

/**
 * _strstr - function that find first occurence of substrings
 * @haystack: parameter for haystack
 * @needle: parameter for needle
 * Return: return to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}

#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying amounts of num ffl by new num
 * @separator: delimiter
 * @n: the amount of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int ixe;

	if (n > 0)
	{
		va_start(valist, n);
		for (ixe = 1; ixe <= n; ixe++)
		{
			printf("%d", va_arg(valist, int));
			if (ixe != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}

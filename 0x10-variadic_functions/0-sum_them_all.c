#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters
 * @...: A variable number of parameters.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int ja, sum = 0;

	va_start(ap, n);

	for (ja = 0; ja < n; ja++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

#include "main.h"
/**
 * primeNumb -takes an input
 * @c: iterator
 * @a: input number
 * Return:return 1 or 0
 */
int primeNumb(unsigned int a, unsigned int c)
{
	if (a % c == 0)
	{
		if (a == c)
			return (1);
		else
			return (0);
	}
	return (0 + primeNumb(a, c + 1));
}

/**
 * is_prime_number - input number, it is a prime number
 * @n: input number
 * Return: return 1 if n is a prime number. 0 if n is not a prime number.
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (primeNumb(n, 2));
}

#include <unistd.h>
/**
 * _putchar - customized printF
 * @c: The char to print
 * Return: 1 on success.
 * On error, -1 returns, and err is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

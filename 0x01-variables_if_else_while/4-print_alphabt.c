#include <stdio.h>

/**
 * main - print the alphabet in lowecase
 * Return: Return always (0)
 */

int main(void)
{
	for (char i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
			putchar (i);
	}
	putchar('\n');
	return (0);
}

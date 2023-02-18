#include <stdio.h>
/**
* main - print all numbers in base 16
* Return: Return always (0)
*/

int main(void)
{
	char i;
	char j;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

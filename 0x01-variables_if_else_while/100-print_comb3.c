#include <stdio.h>
/**
* main - print numbers with combination of two digit
* Return: Return always (0)
*/

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

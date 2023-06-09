#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers doesn't include alphabet followed by anew line.
 * @argc: number of Cli arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int ast, temp, addiTion = 0;

	for (ast = 1; ast < argc; ast++)
	{
		for (temp = 0; argv[ast][temp] != '\0'; temp++)
		{
			if (!isdigit(argv[ast][temp]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addiTion += atoi(argv[ast]);
	}
	printf("%d\n", addiTion);
	return (0);
}

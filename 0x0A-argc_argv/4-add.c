#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not give
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int sum = 0;
	int i = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = 0;
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] >= '0' && arg[j] <= '9')
			{
				num = num * 10 + (arg[j] - '0');
			} else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

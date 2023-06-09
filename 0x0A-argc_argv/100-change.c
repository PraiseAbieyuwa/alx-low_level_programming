#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the minimum number of coins a given amount.
 * @argc: command line arguments.
 * @argv: array that contains strings of a command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int cash, rem = 0;
	/*declare variables*/

	if (argc != 2)/*checks if argc has more than 1 character*/
	{
		printf("Error\n");
		return (1);
	}
	/*parse the parameter to argument*/
	cash = atoi(argv[1]);

	while (cash > 0)
	{
		if (cash  >= 25)
			cash  -= 25;
		else if (cash  >= 10)
			cash  -= 10;
		else if (cash  >= 5)
			cash  -= 5;
		else if (cash  >= 2)
			cash  -= 2;
		else if (cash  >= 1)
			cash  -= 1;
		rem += 1;
	}
	printf("%d\n", rem);
	return (0);
}

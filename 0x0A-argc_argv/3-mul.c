#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that Multiplies two given digits
 * @argc: argument command line
 * @argv: array of strings that stores the argument from command line
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int numBer1, numBer2, temp;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	numBer1 = atoi(argv[1]);
	numBer2 = atoi(argv[2]);

	temp = numBer1 * numBer2;
	printf("%d\n", temp);
	return (0);
}

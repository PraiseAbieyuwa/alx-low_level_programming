#include <stdio.h>
/**
 * main - function that prints all argument passed
 * @argc: argument
 * @argv: argument
 * Return: return success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

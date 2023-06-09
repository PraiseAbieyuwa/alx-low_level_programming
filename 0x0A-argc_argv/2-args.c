#include <stdio.h>

/**
 * main - function that prints out arguments passed to it
 * @argc: argument command line
 * @argv: argument vector w=that stores array of strings command line
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int ast;

	for (ast = 0; ast < argc; ast++)
		printf("%s\n", argv[ast]);
	return (0);
}

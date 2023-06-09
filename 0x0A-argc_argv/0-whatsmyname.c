#include <stdio.h>

/**
 * main - function that prints its own name out
 * @argc: argument command line
 * @argv: stringof array that stores argument command line
 * Return: 0 upon success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>

/**
 * main - function that print the numbers of argument passed
 * @argc: argument command line
 * @argv: string of array thats stores the argumnet count
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

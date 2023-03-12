#include <stdio.h>

/**
 * main - function that prints arguments
 *@argc: argument that stores number of command
 *@argv: argument that store array of character pointer
 * Return: return success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

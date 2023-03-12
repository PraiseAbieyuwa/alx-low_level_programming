#include <stdio.h>

/**
 * main - function that prints arguments
 *@argc: argument that stores number of command
 *@argv: argument that store array of character pointer
 * Return: return success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

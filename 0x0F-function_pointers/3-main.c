#include "3-calc.h"

/**
 * main - Holberton School.
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int ast, bal;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	ast = atoi(argv[1]);
	bal = atoi(argv[3]);

	printf("%d\n", operation(ast, bal));
	return (0);
}

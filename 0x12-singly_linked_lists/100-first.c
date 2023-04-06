#include <stdio.h>
/**
 * prev_main - calls function before main
 * Return: 0
 */
void prev_main(void) __attribute__((constructor));
void prev_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

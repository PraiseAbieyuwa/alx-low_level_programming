#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char : %2d byte \n", sizeof(char));
	printf("size of int : %2d byte \n", sizeof(int*));
	printf("size of long int : %2d byte \n", sizeof(long int*));
	printf("size of long long int %2d byte \n", sizeof(long long int));
	printf("size of float %2d byte \n", sizeof(float));
	return (0);
}

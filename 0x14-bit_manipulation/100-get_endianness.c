#include "main.h"
/**
 * get_endianness - checks the required
 * Return: 0 if its big, 1 if its small
*/
int get_endianness(void)
{
	unsigned int sarc;
	char *achaRa;

	sarc = 1;
	achaRa = (char *)&sarc;

	return ((int)*achaRa);
}

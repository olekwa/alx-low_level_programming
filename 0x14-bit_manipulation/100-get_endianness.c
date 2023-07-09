#include "main.h"

/**
 * get_endianness - this is to check if a machine has little or big endians
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

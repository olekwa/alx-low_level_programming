#include "main.h"

/**
 * set_bit - the bit should be set a given index of 1
 * @n: pointer should be changed
 * @index: the index of the bit should be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: Apointer to the bit
 * @index: the index where the bits at
 *
 * Return: 1 if it worked or -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

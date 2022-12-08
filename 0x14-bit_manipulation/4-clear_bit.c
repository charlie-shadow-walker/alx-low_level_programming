#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 *
 * @n: points to the bit
 *
 * @index: the index to set the value at
 *
 * Return: 1 if it worked or -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

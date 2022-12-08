#include "main.h"

/**
 * flip-bits - counts the number of bits to be flipped
 *
 * @n: the to be flipped
 * @m: the number to flip n to
 *
 * Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

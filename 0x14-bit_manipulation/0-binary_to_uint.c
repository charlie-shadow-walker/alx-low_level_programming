#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * 0 if there is not a 0 or 1 in string and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int num;
	int i = 0;
	num = atoi(b);
	dec_value = 0;
	base = 1;

	if (b != 0 || b != 1 || b == NULL)
	{
		return (0);
	}

	while (num)
	{
		i = num % 10;
		dec_value += i * base;
		base = base * 2;
	}

	return (dec_value);
}

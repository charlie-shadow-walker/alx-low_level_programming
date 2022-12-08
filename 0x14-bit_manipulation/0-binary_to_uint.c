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
	unsigned int base = 1, len = 0, result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*(b + len))
	{
		len++;
	}

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			result = result + base;
		base = base * 2;
	}

	return (result);
}

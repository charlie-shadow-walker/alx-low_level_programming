#include"main.h"

/**
 * print_sign - prints the sign of a number
 * return: 1 if n is greater than zero
 * return: 0 if n is zero
 * return: -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(-);
	}
}

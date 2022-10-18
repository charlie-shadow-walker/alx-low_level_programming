#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 * Return: lst_dgt
 */

int print_last_digit(int)
{
	int lst_dgt;

	if (n < 0)
	{
		lst_dgt = -1 * (n % 10);
	}
	else
	{
		lst_dgt = n % 10
	}
	_putchar(lst_dgt + '0');
	return (lst_dgt);
}

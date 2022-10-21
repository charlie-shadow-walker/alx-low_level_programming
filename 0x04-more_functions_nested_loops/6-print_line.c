#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
 */

void print_line(int n)
{
	int dash;

	for (dash = 1; dash <= n; ++dash)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

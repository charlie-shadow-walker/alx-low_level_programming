#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int loop, space;

	for (loop = 1; loop <= n; ++loop)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				for (space = 1; space <= postn; ++space)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
		}
}

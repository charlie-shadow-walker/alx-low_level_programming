#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; ++j)
	{
		for (i = 0; i <= 14; ++i)
		{
			if (i > 9)
			{
				_putchar(1 + 48);
				i = i % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}


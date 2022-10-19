#include"main.h"

/**
 * functions prints alphabet
 * print_alphabet_x10 function that will prnt the alphabet 10x
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int loop;

	loop = 0;

	while (loop < 10)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
		loop++;
	}
}

#include"main.h"

/**
 * main - prints the alphabet in lowercase
 * description: prints the alphabet in lowercase
 * returns: 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
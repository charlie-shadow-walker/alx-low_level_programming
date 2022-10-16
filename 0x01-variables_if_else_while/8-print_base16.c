#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch[] = "0123456789abcdef";

	for (n = 0; n < 16; n++)
	{
		putchar(ch[n]);
	}
	putchar('\n');
	return (0);
}

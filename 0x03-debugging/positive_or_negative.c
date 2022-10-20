#include <stdio.h>

/**
 * main - point of entry
 * Description: print value of status either zero, positive or negative
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else
	{
		return (0);
	}
}

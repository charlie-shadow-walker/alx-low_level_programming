#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: of the array
 * @cmp: pointer to the fucntion
 * Return: -1 if size <= 0;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <=0)
	{
		return(-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i =1; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print elements in an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (!array || !action)
		return;
	for (i = 0; i< (int) size; i++)
		action(array[i]);
}

#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: points to the head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_size = 1;

	if (h == Null)
	{
		return (0);
	}

	while (h->next != Null)
	{
		if (h->str == Null)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, "h->str");
		}

		h = h->next;
		node_size ++;
	}

	return (node_size);
}

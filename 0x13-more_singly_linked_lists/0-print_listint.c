#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: points to the head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 1;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);

			h = h->next;
			node++;
		}

		printf("%d\n", h->n);
		return (node);
	}
}

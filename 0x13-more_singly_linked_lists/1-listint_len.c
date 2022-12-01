#include "lists.h"

/**
 * listint_len - lists of elements
 *
 * @h: points to the head
 *
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
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
			if (h->n != '\0')
			{
				node++;
			}
			else
			{
				h->next == h;
			}
		}
		return (node);
	}
}

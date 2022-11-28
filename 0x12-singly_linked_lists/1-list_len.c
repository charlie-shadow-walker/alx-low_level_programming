#include "lists.h"

/**
 * list_len - the number of elements in list_t
 *
 * @h: pointer to the head
 *
 * Return: returns number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 1;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: points the node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
	}
}

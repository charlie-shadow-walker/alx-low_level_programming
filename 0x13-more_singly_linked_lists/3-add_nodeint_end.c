#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: points to a node
 * @n: the element of a node
 *
 * Return: the address of the new element or NUll if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *temp;

	lastNode = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));

	if (lastNode == NULL)
	{
		return (NULL);
	}
	else
	{
		lastNode->n = n;
		lastNode->next = NULL;
	}

	temp = *head;

	if (temp == NULL)
	{
		*head = lastNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = lastNode;
	}
	return (*head);
}

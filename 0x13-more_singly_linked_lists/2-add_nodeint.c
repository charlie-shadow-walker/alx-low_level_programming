#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: points to a node
 * @n: the element of a node
 *
 * Return: the address of the new element or NUll if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head  == NULL)
		{
			newNode->next = NULL;
		}
		else
		{
			newNode->next = *head;
		}
		newNode->n = n;
		*head = newNode;
	}
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t list
 * @head: double pointer to head of list
 * @n: value to add to node
 *
 * Return: pointer to new node, or NULL on fail
 */
dlistint_t *add_dnodeint(dslistint **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new = NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *heaed;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}

#include "lists.h"

/**
 * sum_dlistint - sum of all the data of dlistint_t list
 * @head: pointer to beginning of list
 *
 * Return: sum of all the data, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

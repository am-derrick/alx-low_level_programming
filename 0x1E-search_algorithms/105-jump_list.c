#include "search_algos.h"
#include <math.h>

/**
 * go_fwd - moves a list forward until index is found, or the end
 * @list: list to move
 * @index: index
 *
 * Return: node of index looked for, or last node
 */
listint_t *go_fwd(listint_t *list, size_t index)
{
	while (list->next != NULL && *list->index < index)
		list = list->next;
	return (list);
}

/**
 * jump_list - searches for a value in a sorted list using Jump search algo
 * @list: pointer to the head of the list
 * @size: number of nodes
 * @value: value to search for
 *
 * return: pointer to the first node where value is located, or NULL on failure
 */
listint_t jump_list(listint_t *list, size_t size, int value)
{
	size_t skip;
	listint_t *left, *right;

	if (list != NULL && size > 0)
	{
		skip = sqrt(size);
		left = list;
		right = go_fwd(left, skip);
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		while (right->index < (size - 1) && right->n < value)
		{
			left = right;
			right = go_fwd(left, right->index + skip);
			printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       left->index, right->index);
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		while (left->index < size - 1 && left->n < value)
		{
			left = left->next;
			if (left == NULL)
				return (NULL);
			printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		}
		if (left->n == value)
			return (left);
	}
	return (NULL);
}

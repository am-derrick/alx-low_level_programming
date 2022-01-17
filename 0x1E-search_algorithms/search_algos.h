#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: index of node
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif

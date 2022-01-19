#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array
 * @size: size
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * return: index where value is located, -1 if fails
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (array != NULL)
	{
		left = 0;
		right = size - 1;
		print_array(array + left, right + 1 - left);
		while (left < right)
		{
			middle = (left + right) / 2;
			if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle;
			else
				return (middle);
			print_array(array + left, right + 1 - left);
		}
	}
	return (-1);
}

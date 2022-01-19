#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array
 * @size: size of array
 *
 * Return: void
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
 * advanced_binary - searches for a value in a sorted array of integers using
 * Advanced binary search algo
 * @array: pointer to first element of arrat
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int num, right = -1;
	size_t middle;

	if (array != NULL && size > 0)
	{
		print_array(array, size);
		middle = (size - 1) / 2;
		num = array[middle];
		if (num < value)
		{
			right = advance_binary(array + middle + 1, size - (middle + 1), value);
			if (right >= 0)
				right += middle + 1;
		}
		else if (num > value)
			right = advanced_binary(array, middle + 1, value);
		else if (middle == 0 || array[middle - 1] < num)
			right = middle;
		else
			right = advanced_binary(array, middle + 1, num);
	}
	return (right);
}

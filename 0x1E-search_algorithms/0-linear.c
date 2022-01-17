#include "search_algos.h"

/** linear_search - searches for a value in an array of integers using Linear
 * search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * return: first index where value is located, -1 if value is not present or
 *array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}

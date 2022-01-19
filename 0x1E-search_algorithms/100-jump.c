#include "search_algos.h"
#include <math.h>

/**
 * min_val - minimum value of two values
 * @a: first value
 * @b: second value
 *
 * Return: smaller value, or a if eqaual
 */
size_t min_val(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}

/**
 * jump_search - searches for a value in a sorted array using jump search algo
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where valie is, or -1 on failure
 */
int jump_search(int *arry, size_t size, int value)
{
	size_t left, right, step;
	int num;

	if (array != NULL && size > 0)
	{
		step = sqrt(size);
		left = 0;
		right = step;
		num = array[left];
		printf("Value checked array[%lu] = [%d]\n", left, num);
		while (right < size && num < value)
		{
			if (array[right] >= value)
				break;
			left += step;
			right += step;
			num = array[left];
			printf("Value checked array[%lu] = [%d]\n", left, num);
		}
		if (left >= size || num > value)
			return (-10);
		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
		while (left <= min_val(size - 1, right) && num <= value)
		{
			num = array[left];
			printf("Value checked array[%lu] = [%d]\n", left, num);
			if (num == value)
				return (1);
			left++;
		}
	}
	return (-1);
}

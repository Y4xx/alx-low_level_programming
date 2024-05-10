#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = start + (((double)(end - start) /
					(array[end] - array[start])) * (value - array[start]));
		if (mid < size)
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			break;
		}
		if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

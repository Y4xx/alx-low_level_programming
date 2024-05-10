#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, index, interval;

	if (array == NULL)
		return (-1);

	interval = sqrt(size);

	for (i = 0; i < size; i = i + interval)
	{
		if (value <= array[i])
		{
			break;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - interval, i);

	for (index = i - interval; index < i + 1 && index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			return (index);
		}
	}
	return (-1);
}

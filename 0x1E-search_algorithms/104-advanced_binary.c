#include "search_algos.h"

int binary_search_recursive(int *array, size_t a_i, size_t z_i, int value);
/**
 * advanced_binary - searches for a value in an array using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - searches for a value in
 * @array: pointer to the first element of the array
 * @a_i: starting index of the subarray
 * @z_i: ending index of the subarray
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

int binary_search_recursive(int *array, size_t a_i, size_t z_i, int value)
{
	size_t middle, i;

	printf("Searching in array: ");
	for (i = a_i; i <= z_i; i++)
	{
		printf("%d", array[i]);
		if (i + 1 <= z_i)
			printf(", ");
	}
	printf("\n");

	if (array[a_i] == value)
		return (a_i);
	else if (a_i == z_i)
		return (-1);

	middle = (a_i + z_i) / 2;

	if (value <= array[middle])
		return (binary_search_recursive(array, a_i, middle, value));
	else if (value >= array[middle])
		return (binary_search_recursive(array, middle + 1, z_i, value));
	return (-1);
}

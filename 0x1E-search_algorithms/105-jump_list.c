#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array using linear search
 * @list: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, interval;
	listint_t *llstart;

	if (list == NULL)
		return (NULL);

	interval = sqrt(size);
	llstart = list;

	while (list != NULL)
	{
		if (value <= list->n)
		{
			break;
		}
		else
		{
			llstart = list;
			for (i = 0; i < interval && list != NULL && list->next != NULL; i++)
			{
				list = list->next;
			}
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
			if (list->next == NULL)
				break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			llstart->index, list->index);

	while (llstart != list && llstart != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", llstart->index, llstart->n);
		if (value == llstart->n)
			return (llstart);
		llstart = llstart->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", llstart->index, llstart->n);
	return (NULL);
}

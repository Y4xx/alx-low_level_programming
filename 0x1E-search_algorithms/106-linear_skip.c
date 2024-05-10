#include "search_algos.h"

/**
 * linear_skip - searches for a value in an array using linear search
 * @list: pointer to the first element of the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *llstart;

	if (list == NULL)
		return (NULL);
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
			if (list->express != NULL)
				list = list->express;
			else
			{
				while (list != NULL && list->next != NULL)
					list = list->next;
				break;
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

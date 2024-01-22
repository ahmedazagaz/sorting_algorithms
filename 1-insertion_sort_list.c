#include "sort.h"

/**
 * swap_nodes - Swap two nodes.
 * @n1: The first node to swap.
 * @n2: The second node to swap.
 */
void swap(listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	if (x->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	x->prev = y;
	y->next = x;

}

/**
 * insertion_sort_list -  insertion sort algorithm.
 * @list: the unsorted doubley linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *y;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;

	while (i)
	{
		y = i;
		i = i->next;

		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				swap_nodes(y->prev, y);
				if (!jer->prev)
					*list = y;
				print_list((const listint_t *)*list);
			}
			else
				y = y->prev;
		}
	}
}

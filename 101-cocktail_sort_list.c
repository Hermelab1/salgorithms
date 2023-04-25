#includr "sort.h"

/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @list: double pointer to the head of the list
 * @node1: double pointer to the first node
 * @node2: double pointer to the second node
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2)
{
	listint_t *prev1 = (*node1)->prev;
	listint_t *next2 = (*node2)->next;

	if (prev1)
		prev1->next = *node2;
	else
		*list = *node2;
	(*node2)->prev = prev1;
	(*node2)->next = *node1;
	(*node1)->prev = *node2;
	(*node1)->next = next2;

	if (next2)
		next2->prev = *node1;
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integers
 * in ascending order using the cocktail shaker sort algorithm
 *
 * @list: double pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *start = NULL, *end = NULL, *current = NULL;
	int swapped = 0;

	if (!list || !*list)
		return;
	do {
		swapped = 0;
		for (current = *list; current->next != end; current =	current->next)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(list, &current, &current->next);
				swapped = 1;
				print_list(*list);
			}
		}
		end = current;
		if (!swapped)
			break;
		swapped = 0;
		for (current = current->prev; current->prev != start->prev; current = current->prev)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(list, &current->prev, &current);
				swapped = 1;
				print_list(*list);
			}
		}
		start = current;
	} while (swapped);
}

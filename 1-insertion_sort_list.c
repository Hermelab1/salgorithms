#include "sort.h"

#include "sort.h"

/**
 * swapping_nodes - Swap two nodes in a listint_t doubly-linked list.
 *
 * @head: A pointer to the head of the doubly-linked list.
 * @num1: A pointer to the first node to swap.
 * @num2: The second node to swap.
 */
void swapping_nodes(listint_t **head, listint_t **num1, listint_t *num2)
{
	(*num1)->next = num2->next;
	if (num2->next != NULL)
		num2->next->prev = *num1;
	num2->prev = (*num1)->prev;
	num2->next = *num1;
	if ((*num1)->prev != NULL)
		(*num1)->prev->next = num2;
	else
		*head = num2;
	(*num1)->prev = num2;
	*num1 = num2->prev;
}
/**
 * insertion_sort_list - funstion used to sort by using insertion sort
 *
 * @list: array element list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *tmp, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		j = i->prev;
		while (j != NULL && i->n < j->n)
		{
			swapping_nodes(list, &j, i);
			print_list((const listint_t *)*list);
		}
	}
}

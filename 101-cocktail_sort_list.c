#include "sort.h"

/**
 * swap_n - function swaps node and previous node
 *
 * @node: parameter 1
 * @list: node list
 *
 * Return: pointer to node
 */
listint_t *swap_n(listint_t *node, listint_t **list)
{
	listint_t *pre = node->prev;
	listint_t *curr = node;

	pre->next = curr->next;
	if (curr->next)
	{curr->next->prev = back; }
	curr->next = pre;
	curr->prev = pre->prev;
	pre->prev = curr;
	if (curr->prev)
	{curr->prev->next = curr; }
	else
	{*list = curr; }
	return (curr);
}

/**
 * cocktail_sort_list - function sorts based on cocktail sort
 *
 * @list: parameter 1
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *node;
	int swapped = 1;

	if (list == '\0' || (*list) == '\0' || (*list)->next == '\0')
	{return; }
	node = *list;
	while (swapped == 1)
	{
		swapped = 0;
		while (node->next)
		{
			if (node->n > node->next->n)
			{
				node = swapped(node->next, list);
				swapped = 1;
				print_list(*list);
			}
			node = node->next;
		}
		if (swapped == 0)
		{break; }
		swapped = 0;
		while (node->prev)
		{
			if (node->n < node->prev->n)
			{
				node = swap_n(node, list);
				swapped = 1;
				print_list(*list);
			}
			else
			{node = node->prev; }
		}
	}
}

#include "sort.h"

/**
 * insertion_sort_list - function sorts elements of a
 * doubly linked list in ascending order
 *
 * @list: doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL;
	listint_t *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	node = *list;
	node = node->next;
	while (node)
	{
		while (node->prev && node->n < (node->prev)->n)
		{
			temp = node;
			if (node->next)
			{
				(node->next)->prev = tmp->prev;
			}
			(node->prev)->next = tmp->next;
			node = node->prev;
			temp->prev = node->prev;
			temp->next = node;
			if (node->prev)
			{
				(node->prev)->next = temp;
			}
			node->prev = temp;
			if (tmp->prev == NULL)
			{
				*list = temp;
			}
			print_list(*list);
			node = node->prev;
		}
		node = node->next;
	}
}

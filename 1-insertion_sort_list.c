#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * in ascending order using Insertion sort
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current, *prev, *temp;	
	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			prev = temp->prev;
			prev->next = temp->next;
			if (temp->next != NULL)
                temp->next->prev = prev;
			temp->prev = prev->prev;
			temp->next = prev;
			
			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;
			prev->prev = temp;
			print_list(*list);
		}
		current = current->next;
	}
}

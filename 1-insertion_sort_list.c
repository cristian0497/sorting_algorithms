#include "sort.h"
/**
 * insertion_sort_list - algorithm sorter
 * @list: Doubl linked list
 * Return: Void Function
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *back, *nxt, *head = (*list);

	while (head != NULL && head->next && (*list))
	{
		if (head->n > head->next->n)
		{
			back = head->prev;
			nxt = head->next;
			if (!back)
			{
				nxt->prev = NULL;
				(*list) = nxt;
			}
			else
			{
				nxt->prev = back;
				back->next = nxt;
			}
			aux = nxt->next;
			if (!aux)
			{
				head->next = NULL;
				nxt->next = head;
			}
			else
			{
				nxt->next = head;
				aux->prev = head;
			}
			head->next = aux;
			head->prev = nxt;
			print_list((*list));
			head = (*list);
		}
		else
			head = head->next;
	}
}

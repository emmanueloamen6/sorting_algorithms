#include "sort.h"

/**
 * insertion_sort_list - sort elements in list
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;

	if ((*list) == NULL || (*list)->next == NULL)
		return;
	temp = (*list)->next;
	while (temp)
	{
		while ((temp->prev) && (temp->prev->n > temp->n))
		{
			temp = swap_node(temp, list);
			print_list(*list);
		}
		temp = temp->next;
	}
}
/**
 *swap_node - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *temp, listint_t **list)
{
	listint_t *back = temp->prev, *current = temp;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}

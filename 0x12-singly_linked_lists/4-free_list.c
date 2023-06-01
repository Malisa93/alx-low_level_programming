#include "lists.h"
/**
 * free_list -free a list_t list.
 * @head:a pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *emp;

	while (head)
	{
		emp = head->next;
		free(head->str);
		free(head);
		head = emp;
	}
}

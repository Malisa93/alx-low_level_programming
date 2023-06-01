#include "lists.h"
#include "string.h"
/**
 * add_node_end-Add a new node at the end of a linked list
 * @head:a pointer to the head of the list
 * @str:the string to add to the list
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_s;
	int len;
	list_t *new_s, *last_s;

	new_s = malloc(sizeof(list_t));
	if (new_s == NULL)
		return (NULL);

	dup_s = strdup(str);
	if (str == NULL)
	{
		free(new_s);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_s->str = dup_s;
	new_s->len = len;
	new_s->next = NULL;

	if (*head == NULL)
		*head = new_s;

	else
	{
		last_s = *head;
		while (last_s->next != NULL)
			last_s = last_s->next;
		last_s->next = new_s;
	}

	return (*head);
}

#include "lists.h"
#include "string.h"
/**
 * add_node-Add a new node at the beginning of a linked list
 * @head:a pointer to the head of the list
 * @str:the string to add to the list
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_s;
	int len;
	list_t *new_s;

	new_s = malloc(sizeof(list_t));
	if (new_s == NULL)
		return (NULL);

	dup_s = strdup(str);
	if (dup_s == NULL)
	{
		free(new_s);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_s->str = dup_s;
	new_s->len = len;
	new_s->next = *head;

	*head = new_s;

	return (new_s);
}

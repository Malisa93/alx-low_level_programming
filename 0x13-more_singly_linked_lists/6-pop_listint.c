#include "lists.h"
/**
 * pop_listint - function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: A pointer to the head of the listint_t list
 * Return: If the linked list is empty - 0.
 *         Otherwise, the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int pro;

	if (*head == NULL)
		return (0);

	tmp = *head;
	pro = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (pro);
}

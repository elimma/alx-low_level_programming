#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *previous_node = NULL;

	while (*head != NULL)
	{
		current_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = current_node;
	}
	return (previous_node);
}

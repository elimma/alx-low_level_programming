#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		cnt++;
		current = current->next;
	}
	return (cnt);
}

#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (current != NULL && current >= temp)
		{
			printf("-> [%p] %d\n", (void *) current, current->n);
			count++;
			current = NULL;
		}
	}
	*h = NULL;
	return (count);
}

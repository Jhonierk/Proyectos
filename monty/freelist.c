#include "monty.h"
/**
 * freelist - free the list.
 * @head: list to free.
 */
void freelist(stack_t **head)
{
	stack_t *aux;

	if (!head || !*head)
		return;
	while (*head)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
}

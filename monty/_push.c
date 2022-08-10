#include "monty.h"
/**
 * _push - adds a new node at the end of the list.
 * @stack: is the list.
 * @line_number: number of the line to be executed.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *newlist;
	(void)line_number;

	newlist = malloc(sizeof(stack_t));
	if (!newlist)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newlist->n = v_list;
	newlist->prev = NULL;
	newlist->next = NULL;
	if (*stack)
	{
		newlist->next = *stack;
		newlist->prev = NULL;
		newlist->next->prev = newlist;
	}
	*stack = newlist;
}

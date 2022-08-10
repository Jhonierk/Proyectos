#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: is the list to print
 * @line_number: number of the line to be executed.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = temp->next;
	temp->prev = NULL;
	(*stack)->prev = temp;

	if (temp->next)
	{
		temp->next->prev = *stack;
	}
	temp->next = *stack;
	(*stack) = (*stack)->prev;
}

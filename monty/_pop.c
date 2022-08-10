#include "monty.h"
/**
 * _pop - removes the top element of the stack.
 * @stack: is the list to print.
 * @line_number: number of the line to be executed.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	node  = *stack;
	(*stack) = (*stack)->next;
	free(node);
}

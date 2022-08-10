#include "monty.h"
/**
 * _sub - subtracts the top element of the stack from the second top element of the stack.
 * @stack: is the list to print.
 * @line_number: number of the line to be executed.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n -= temp;
}

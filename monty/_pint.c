#include "monty.h"
/**
 * _pint - prints the value at the top of the stack
 * @stack: is the list to print
 * @line_number: number of the line to be executed.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

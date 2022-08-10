#include "monty.h"
/**
 * _pall - print the list values.
 * @stack: is the list to print.
 * @line_number: number of the line to be executed.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	(void)line_number;

	aux = *stack;
	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}

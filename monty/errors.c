#include "monty.h"
/**
 * er - prints the value at the top of the stack
 * @str: is the list to print
 * @stack: number of the line to be executed.
 * @fd: number of the line to be executed.
 * @argv: number of the line to be executed.
 * @numberl: number of the line to be executed.
 */

void er(char *str, stack_t *stack, FILE *fd, char **argv, unsigned int numberl)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", numberl, argv[0]);
	free(str);
	freelist(&stack);
	fclose(fd);
	free(argv);
	exit(EXIT_FAILURE);
}

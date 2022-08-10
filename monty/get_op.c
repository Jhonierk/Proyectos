#include "monty.h"
/**
 * get_op - obtains the function to operate.
 * @argv: string with command
 * Return: function.
 */
void (*get_op(char **argv))(stack_t **, unsigned int)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{NULL, NULL}
	};
	unsigned int i = 0;
	int check = 0;

	while (ops[i].opcode)
	{
		if (strcmp(argv[0], ops[i].opcode) == 0)
		{
			if (strcmp(argv[0], "push") == 0)
			{
				check = check_number(argv);
				if (check != -1)
					return (ops[i].f);
			}
			else
				return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

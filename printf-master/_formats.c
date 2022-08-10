#include "holberton.h"

/**
 * _formats - Select the function according to a format.
 * @form: Pointer to the format.
 *
 * Return: 0 (success).
 */

int (*_formats(char form))()
{
	f_types op[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_decimal},
		{NULL, NULL}
	};
	int runs_op;

	for (runs_op = 0; op[runs_op].type; runs_op++)
	{
		if (op[runs_op].type[0] == form)
			return (op[runs_op].print);
	}
	return (NULL);
}

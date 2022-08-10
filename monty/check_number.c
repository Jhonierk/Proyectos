#include "monty.h"
/**
 * check_number - check if it is a valid number.
 * @argv: string with command
 * Return: 1 or -1.
 */
int check_number(char **argv)
{
	int i = 0;

	if (atoi(argv[1]) > 0)
	{
		while (argv[1][i])
		{
			if (isdigit(argv[1][i]) != 0)
				i++;
			else
				return (-1);
		}
		return (0);
	}
	else if (atoi(argv[1]) < 0)
	{
		i = 1;
		while (argv[1][i])
		{
			if (isdigit(argv[1][i]) != 0)
				i++;
			else
				return (-1);
		}
		return (0);
	}
	else if (argv[1][0] == '0' && !argv[1][1])
		return (0);
	return (-1);
}

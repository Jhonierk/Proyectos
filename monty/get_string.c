#include "monty.h"
/**
 * get_string - Gets the string from the file and operates.
 * @str: string in file.
 * Return: arguments in tokenizer.
 */
char **get_string(char *str)
{
	char **argv = NULL, *token = NULL;
	int index = 0;

	argv = malloc(sizeof(char *) * 3);
	if (argv == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(str, "\t\n ");
	while (token && index < 2)
	{
		argv[index] = token;
		index++;
		token = strtok(NULL, "\t\n ");
	}
	argv[index] = NULL;
	return (argv);
}

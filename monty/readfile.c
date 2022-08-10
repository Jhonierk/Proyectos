#include "monty.h"
/**
 * readfile - Open a file
 * @file: file.
 */
void readfile(char *file)
{
	FILE *fd;
	char *str = NULL, **argv = NULL;
	size_t size = 0;
	ssize_t line_length;
	stack_t *stack = NULL;
	unsigned int numberl = 1;
	void (*op_fun)(stack_t **, unsigned int);

	fd = fopen(file, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	line_length = getline(&str, &size, fd);
	while (line_length != EOF)
	{
		argv = get_string(str);
		op_fun = get_op(argv);
		if (op_fun)
		{
			if (argv[1])
				v_list = atoi(argv[1]);
			op_fun(&stack, numberl);
		}
		else
			er(str, stack, fd, argv, numberl);
		numberl++;
		line_length = getline(&str, &size, fd);
		free(argv);
	}
	free(str);
	freelist(&stack);
	fclose(fd);
}

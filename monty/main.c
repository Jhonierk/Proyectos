#include "monty.h"
/**
 * main - the principal program to execute.
 * @argc: Arguments numbers.
 * @argv: strings arguments.
 * Return: 0 or EXIT_FAILURE.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	readfile(argv[1]);
	return (0);
}

#include "monty.h"

/**
 * main - Entry point for the monty interpreter
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */


int main(int argc, char **argv)
{
	FILE *command_file;
	char *line = NULL;
	ssize_t get_return = 0;
	size_t line_buf = 0, num_line = 0;
	stack_t *stack = NULL;
	int i = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	command_file = fopen(argv[1], "r");
	if (command_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (get_return = getline(&line, &line_buf, command_file) != -1)
	{
		num_line++;
		run_code(line, &stack, num_line, command_file);
	}

	free(line);
	free(stack);
	fclose(command_file);

	return (0);
}

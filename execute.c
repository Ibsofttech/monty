#include "monty.h"

/**
 * run_code - handles all function (the power house)
 *
 * @stack: the head of the stack linked list
 * @lineNumber: the current line number
 * @file: poiner to monty file
 * @line: current line read
 *
 * Return: void
 */
int run_code(char *line, stack_t **stack, unsigned int lineNumber, FILE *file)
{
	size_t i = 0;
	char *opcode;

	opcode = strtok(line, " \n\t");
	if (opcode && opcode[0] == '#')
		return (0);
	printf("%s\n", opcode);
}

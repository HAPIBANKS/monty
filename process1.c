#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
*process - processes the monty files
*@filename: name of monty file opcode
*@stack: stack
*Return: error or success
*/
int process(char *filename, stack_t **stack)
{
	size_t len;
	ssize_t read;
	char *op;
	FILE *fp;
	unsigned int line_number = 0;
	char *line = NULL;
	const char *DELIMS = "\n ";

	if (!filename)
	{
		printf("Error: can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	fp  = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Error: can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	atexit(free_all);
	while ((read = getline(&line, &len, fp)) != -1)
	{
		op = strtok(line, DELIMS);
		line_number++;

		if (op)
			select_op(stack, op, line_number);
	}
	free(line);
	fclose(fp);
	return (EXIT_SUCCESS);
}


/**
 * parse_line - tokenises each line of the file
 * @line_number: number of lines
 * @info: data storage for the opcodes
 * @line: characters from the file
 * Return: 0(stack) or 1(queues)
 */
int parse_line(char *line, unsigned int line_number, int info)
{
	char *op, *value;
	const char *DELIMS = "\n ";
	(void)line_number;
	
	if (line == NULL)
		printf("Error\n");
	op = strtok(line, DELIMS);

	if (op == NULL)
		return (info);
	value = strtok(NULL, DELIMS);

	if (strcmp(op, stack) == 0)
		return (0);
	if (strcmp(op, queue) == 0)
		return (1);

	return (info);
}

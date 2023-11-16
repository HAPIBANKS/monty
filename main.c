#include "monty.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success) otherwise EXIT_FAILURE
 */
int main(argc, argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	file = fopen(file, "r");
	return (0);
}

/**
 * read_file - opens and reads a file
 * @file: name of the file
 */

void read_file(char *file)
{
	unsigned int line_number;
	size_t len = 0;

	data = 0;

	char str = NULL;

	File *fd = fopen(file, "r");

	if (file == NULL)
	{
		printf("error\n");
		exit(EXIT_FAILURE);
	}

	for (line_number = 1, getline(&str, &len, file)) != -1)
	{
		line_number++;
		data = parse_line(str, line_number, data);
	}

	free(str);
	fclose(file);
}

/**
 * parse_line - tokenises each line of the file
 * @line_number: number of lines
 * @info: data storage for the opcodes
 * @line: characters from the file
 * Return: 0(stack) or 1(queues)
 */
int parse_line(char *str, unsigned int line_number, info)
{
	char *opcode;
	*data;

	if (line == NULL)
		printf("Error\n");

	opcode = strtok(str, " \n\t\r");
	if (opcode == NULL)
		return (info);
	data = strtok(NULL, " \n\t\r");

	if (strcmp(opcode, stack) == 0)
		return (0);
	if (strcmp(opcode, queue) == 0)
		return (1);

	return (info);
}



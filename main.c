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
		fprintf(stderr, "Usage: %s monty file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
}

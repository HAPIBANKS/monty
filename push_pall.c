#include "monty.h"

/**
 * push - pushes an element onto the stack
 * @stack: double pointer to the stack
 * @line_number: value of the element to be pushed
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *data;
	int n;

	if (!data)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(data);

	stack->n = n;
	stack->prev = NULL;
	stack->next = *head;

	if (*head)
	{
		(*head)->prev = stack;
		*head = stack;
	}
}

/**
 * pall -  prints all the values on the stack
 * @stack: pointer to the head
 * @line_number: stack value
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *temp = *stack;

	if (temp == NULL)
		exit(EXIT_FAILURE);
	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}


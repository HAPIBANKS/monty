#include "monty.h"

/**
 * push - pushes an element onto the stack
 * @head: head's pointer
 * @line_number: value of the element to be pushed
 */

void push(stack_t **head, unsigned int line_number)
{
	*data;
	int val;

	if (!data)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(data);

	newNode->n = val;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head)
	{
		(*head)->prev = newNode;
		*head = newNode;
	}
}

/**
 * pall -  prints all the values on the stack
 * @head: pointer to the head
 * @line_number: stack value
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *nodes;

	if (nodes == NULL)
		exit(EXIT_FAILURE);
	while(nodes)
	{
		printf("%d\n", nodes->n);
		nodes = nodes->next;
	}
}


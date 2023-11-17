#include "monty.h"

/**
 * create_node - function that creates nodes
 * @val: value stored in the node
 * Return: node
 */
void create_node(stack_t **stack, unsigned int n)
{
	stack_t *node;

	stack_t *node = (stack_t *)malloc(sizeof(stack_t));

	if (!node)
	{
		perror("Error: malloc failed");
	}
	else
	{
		node->prev = NULL;
		node->n = n;
		node->next = NULL;
	}
	return (node);
}

/**
 * insert - Adds a node to a queue
 * @newNode: Pointer to the head.
 * @line_number: line number of the opcode.
 */

void insert(stack_t **newNode, unsigned int line_number)
{
	stack_t *temp;

	if (head == NULL)
	{
		head = *newNode;
		return;
	}
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *newNode;
	(*newNode)->prev = temp;

}

#include "monty.h"

/**
 * create_node - function that creates nodes
 * @val: value stored in the node
 * Return: node
 */
stack_t create_node(int val)
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
		node->val = val;
		node->next = NULL;
	}
	return (node);
}

/**
 * insert - Adds a node to a queue
 * @head: Pointer to the head.
 * @line_number: line number of the opcode.
 */

void insert(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *newNode;
	(*newNode)->prev = temp;

}

/**
 * free_nodes - Frees nodes in the stack.
 */

void free_nodes(void)
{
	stack_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

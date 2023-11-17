#include "monty.h"

/**
 * create_node - function that creates nodes
 * @n: value stored in the node
 * Return: node
 */
stack_t *create_node(unsigned int n)
{
    stack_t *node = malloc(sizeof(stack_t));

    if (!node)
    {
        perror("Error: malloc failed");
        exit(EXIT_FAILURE);
    }

    node->prev = NULL;
    node->n = n;
    node->next = NULL;

    return node;
}

/**
 * insert - Adds a node to a queue
 * @newNode: Pointer to the head.
 * @line_number: line number of the opcode.
 */
void insert(stack_t **newNode, unsigned int line_number)
{
    stack_t *temp;

    if (!newNode || *newNode == NULL)
    {
        fprintf(stderr, "L%d: Unable to insert a NULL node\n", line_number);
        exit(EXIT_FAILURE);
    }

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

#include "monty.h"

/**
*function_swap - a function that swaps the top two element of a stack
*@stack: a stack node
*@line_number: value of node
*Return: it returns void
*/
void function_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	UNUSED(line_number);
/*check if the stack is empty or has only one element*/
	if (!(*stack) || ((*stack)->next))
	{
		printf("l%u: can't swap, stack too short\n", line_number)
		exit(EXIT_FAILURE)
	}
/*if the stack contains tow or more elements*/
	tmp = (*stack)->next;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
/*if there is a next element after tmp, update its pointer*/
	if (tmp->next)
	tmp->next->prev = *stack;
/*update the next pointe rof the tmp*/
	tmp->next = *stack;
/*update the stack pointer to point to the new top ofthe stack*/
	(*stack) = (*stack->prev)
}

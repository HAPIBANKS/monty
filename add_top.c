#include "monty.h"
/**
*add_toptwo - a function taht adds the top two elements of a stack
*@stack: the stack
*@line_number: nodes number
*Return: returns void
*/
void add_toptwo(stack_t **stack, unsigned int line_number)
{
	int sum = 0;
	stack_t *top = *stack, *second = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: cant't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		second = top->next;

		sum = (top->n) + (second->n);
		second->n = sum;
		*stack = second;
		free(top);
	}

}

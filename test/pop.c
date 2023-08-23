#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pop_from_stack - removes value from list
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the pop operation occurred
 * Return:no return type
 */
void pop_from_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	 stack_t *temp = *stack;
	 *stack = (*stack)->next;
	 
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}

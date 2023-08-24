#include "monty.h"
#include <stdlib.h>

/**
 * swap_top_two - swaps top two value in the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */


void swap_top_two(stack_t **stack, unsigned int line_number)
{

	int *temp;
	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
}

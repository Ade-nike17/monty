#include <stdio.h>
#include "monty.h"
#include <stdlib.h>

/**
 * add_stack - adds top two value in the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */


void add_stack(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	pop_from_stack(stack, line_number);
	(*stack)->n = sum;
}

#include "monty.h"


/**
 * sub_stack - Subtracts the top element from the second top element
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */

void sub_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n -= temp->n;
	(*stack)->prev = NULL;

	free(temp);
}


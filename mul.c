#include "monty.h"

/**
 * mul_stack - Multiplies the second top element with the top element
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */
void mul_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n *= temp->n;
	(*stack)->prev = NULL;

	free(temp);
}


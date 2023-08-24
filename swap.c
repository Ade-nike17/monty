#include "monty.h"

/**
 * swap_top_two - swaps top two value in the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */


void swap_top_two(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	second = (*stack)->next;

	first->next = second->next;
	second->next = first;
	*stack = second;
}

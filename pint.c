#include "monty.h"

/**
 * execute_pint - prints  values in the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */


void execute_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
	(*stack) = (*stack)->next;
}

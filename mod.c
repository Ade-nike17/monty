#include "monty.h"


/**
 * mod - calculates modulus of second top element by the top element
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;	
	if (!*stack || !(*stack)->next)
	{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	if (temp->n == 0)
	{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	free(temp);
	fclose(input.file);
	free_stack(*stack);
	exit(EXIT_FAILURE);
	}
	(*stack)->n %= temp->n;
	(*stack)->prev = NULL;
	
	free(temp);
}

#include <stdio.h>
#include <stdlib.h>
#include "monty.h"


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

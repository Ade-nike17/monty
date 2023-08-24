#include <stdio.h>
#include <stdlib.h>
#include "monty.h"


void execute_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
	temp = temp->next;
}

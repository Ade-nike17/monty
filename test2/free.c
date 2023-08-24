#include <stdio.h>
#include <stdlib.h>
#include "monty.h"


void free_stack(stack_t *stack)
{
	stack_t *current = stack;

	while (current != NULL)
	{
		stack_t *temp = current;
		current = current->next;
		free(temp);
	}
}

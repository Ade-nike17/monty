#include "monty.h"


void free_stack(stack_t *stack)
{
	stack_t *current = stack;

	while (current != NULL)
	{
		stack = current;
		current = current->next;
		free(stack);
	}
}

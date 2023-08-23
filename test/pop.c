#include <stdlib.h>
#include "monty.h"

/**
 * pop_from_stack - Pops the value at the top of the stack
 * @stack: Pointer to the top of the stack
 */
void pop_from_stack(stack_t **stack)
{

	if (*stack != NULL)
	{
	stack_t *temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	}
}

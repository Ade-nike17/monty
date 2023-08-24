#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pall - Prints all values on the stack
 * @stack: Pointer to the top of the stack
 */
void pall_stack(stack_t **stack, unsigned int line_number)
{

	stack_t *current; 
	(void) line_number;
	current = *stack;
	 
	 while (current != NULL)
	 {
		 printf("%d\n", current->n);
		 current = current->next;
	 }
}

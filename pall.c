#include "monty.h"

/**
 * pall - Prints all values on the stack
 * @stack: Pointer to the top of the stack
 */
void pall_stack(stack_t **stack, __attribute__((unused))unsigned int line_number)
{

	stack_t *current; 
	current = *stack;
	 
	 while (current != NULL)
	 {
		 printf("%d\n", current->n);
		 current = current->next;
	 }
}

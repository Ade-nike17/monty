#define _DEFAULT_SOURCE
#include "monty.h"
#include <stdio.h>
#include <ctype.h>

/**
 * pstr - Prints string starting at top of the stack, followed by new line.
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;
	while (current != NULL && current->n != 0 && isascii(current->n))
	{
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}

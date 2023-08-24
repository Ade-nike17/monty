#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <ctype.h>

/**
 * push_to_stack - inserts value into list
 * @stack: linked list
 * @line_number:second parameter
 */

void push_to_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	(void)line_number;
	
	/*if (!isdigit(arg) && arg != '-' && arg != '+')
	{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}*/
	if (new_node == NULL)
	{
	fprintf(stderr, "Memory allocation failed\n");
	exit(EXIT_FAILURE);
	}
	new_node->n = arg;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

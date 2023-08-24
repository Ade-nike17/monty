#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push_to_stack - inserts value into list
 * @stack: linked list
 * @value:second parameter
 */

void push_to_stack(stack_t **stack,unsigned int line_number)
{
	
	stack_t *new_node = malloc(sizeof(stack_t));
	(void)line_number;

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

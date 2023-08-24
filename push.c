#include "monty.h"
#include <ctype.h>


/**
 * push_to_stack - inserts value into list
 *
 * @stack: linked list
 * @line_number: second parameter
 */

void push_to_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	if (!input.args || !is_real_int(input.args))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(new_node);
		fclose(input.file);
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(input.args);
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}

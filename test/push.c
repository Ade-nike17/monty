#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push_to_stack - inserts value into list
 * @stack: linked list
 * @value:second parameter
 *

void push_to_stack(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
*/


/**
 * push_to_stack - inserts value into list
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the push operation occurred
 * @value: value to be pushed onto the stack
 */
void push_to_stack(stack_t **stack, unsigned int line_number)
{
    int value = 0;    
     
    stack_t *new_node;

    (void)stack;
    (void)line_number;
    
      new_node = malloc(sizeof(stack_t));

        if (new_node == NULL)
        {
                fprintf(stderr, "L%u: malloc failed\n", line_number);
        exit(EXIT_FAILURE);
                return;
        }
        new_node->n = value;
        new_node->next = *stack;
        new_node->prev = NULL;

        if (*stack != NULL)
        {
                (*stack)->prev = new_node;
        }
        *stack = new_node;
}

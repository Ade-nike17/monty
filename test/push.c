#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push_to_stack - inserts value into list
 * @stack: linked list
 * @value:second parameter
 */

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

#include "monty.h"

/**
 * free_stack - function frees stack
 *
 * @stack: pointer to the head of stack
 * Return: nothing
 *
 */

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

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void push_to_stack(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->n = value;
    new_node->next = *stack;
    new_node->prev = NULL;

    if (*stack != NULL) {
        (*stack)->prev = new_node;
    }

    *stack = new_node;
}

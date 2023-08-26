#include "monty.h"

/**
 * pchar - Prints the character at the top of the stack, followed by a new line.
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number of the operation
 */

void pchar(stack_t **stack, unsigned int line_number)
{
        int value;
	char *endptr;
        if (*stack == NULL)
        {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        fclose(input.file);
        exit(EXIT_FAILURE);
        }

	if (input.args == NULL || input.args[0] == '\0')
    {
        fprintf(stderr, "L%d: can't pchar, no argument given\n", line_number);
        fclose(input.file);
        exit(EXIT_FAILURE);
    }

    
    value = strtol(input.args, &endptr, 10);

    if (*endptr != '\0') 
    {
        fprintf(stderr, "L%d: can't pchar, invalid argument\n", line_number);
        fclose(input.file);
        exit(EXIT_FAILURE);
    }

        if (value < 0 || value > 127)
        {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        fclose(input.file);
        exit(EXIT_FAILURE);
        }

        putchar(value);
        putchar('\n');
}

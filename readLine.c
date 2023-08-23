#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

void read_line(FILE *file, stack_t **stack)
{
	char line[256];
	unsigned int line_number = 0;
	char *command;
	int value;
	char *value_str;

	while (fgets(line, sizeof(line), file))
	{
		line_number++;
		command = strtok(line, " \t\n");
		if (command != NULL && strcmp(command, "push") == 0)
		{
			value_str = strtok(NULL, " \t\n");
			if (value_str != NULL)
			{
				value = atoi(value_str);
				push_to_stack(stack, value);
			}
			else
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				fclose(file);
				exit(EXIT_FAILURE);
			}
		}
		else if (command != NULL && strcmp(command, "pint") == 0)
		{
			execute_pint(stack, line_number);
		}
		else if (command != NULL && strcmp(command, "pop") == 0)
		{
			execute_pop(stack, line_number);
		}
	}
}

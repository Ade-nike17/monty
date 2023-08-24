#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
int arg = 0;

void read_line(FILE *file, stack_t **stack)
{
	char line[256];
	unsigned int line_number = 0;
	char *command;
	/*int value;*/
	char *value_str;

	 instruction_t instructions[] = 
	 {
		 {"push", push_to_stack},
		 {"pall", pall_stack},
		 {"pop",  pop_from_stack},
		 {NULL, NULL}
	 };

	while (fgets(line, sizeof(line), file))
	{
		line_number++;
		
		command = strtok(line, " \t\n");

		if (command != NULL) 
		{
		int i = 0;
		value_str = strtok(NULL, " \t\n");

		while (instructions[i].opcode != NULL)
		{
                if (strcmp(command, instructions[i].opcode) == 0) 
		{
			if (value_str != NULL)
			{
		    	arg = atoi(value_str);
			}
                    instructions[i].f(stack, line_number);
		    break;
		}
		i++;
                }
               
		}

	}
	
	
}

#include "monty.h"


void read_line(void)
{
	int i;

	instruction_t instructions[] = 
	{
		 {"push", push_to_stack},
		 {"pall", pall_stack},
		 {"pint", execute_pint}, 
		 {"pop",  pop_from_stack},
		 {"swap", swap_top_two},
		 {NULL, NULL}
	 };

	i = 0;
	while (instructions[i].opcode!= NULL)
	{
		if (strcmp(input.command, instructions[i].opcode) == 0)
		{
			instructions[i].f(&input.stack, input.line_number);
			return;
                    
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", input.line_number, input.command);
	fclose(input.file);
	free_stack(input.stack);
	exit(EXIT_FAILURE);
		
}

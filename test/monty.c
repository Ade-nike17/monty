#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <string.h>
#define EXIT_FAILURE 1

int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <int>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	read_line(file, &stack);

	fclose(file);

	free_stack(stack);

	return (0);
}


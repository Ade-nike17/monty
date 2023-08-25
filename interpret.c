#include "monty.h"

/**
 * interpret_line - function interprets monty codes
 *
 * Return: nothing
 */


void interpret_line(void)
{
	char buffer[1024];
	char *trimmed_line;
	
	input.file = fopen(input.file_name, "r");
	if (input.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", input.file_name);
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, sizeof(buffer), input.file))
	{
		input.line_number++;
		input.line = buffer;

		trimmed_line = input.line;
		while (*trimmed_line == ' ' || *trimmed_line == '\t')
		{
			trimmed_line++;
		}
		if (*trimmed_line == '\n' || *trimmed_line == '#')
		{
			continue;
		}

		input.command = strtok(input.line, " \t\n");

		if (input.command != NULL)
		{
			input.args = strtok(NULL, " \t\n");
			read_line();
		}

	}
	fclose(input.file);
	free_stack(input.stack);
}


/**
 * is_real_int - function checks if a char is a digit
 *
 * @str: string to be checked
 *
 * Return: 0 if not digit and 1 if digit
 */

int is_real_int(const char *str)
{
	size_t i;

	if (!str || *str == '\0')
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit((unsigned char)str[i]))
			return (0);
	}

	return (1);
}

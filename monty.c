#include "monty.h"

/* Initializing interpreterData struct */
intprt_data input = {0, NULL, NULL, NULL, NULL, NULL, NULL};


/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success
 */


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	input.file_name = argv[1];

	interpret_line();

	return (0);
}


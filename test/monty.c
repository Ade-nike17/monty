#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <string.h>
#define EXIT_FAILURE 1

int main(int argc, char *argv[])
{

char line[256];
unsigned int line_number = 0;
char *command;
FILE *file;
stack_t *current;
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
while (fgets(line, sizeof(line), file))
{
line_number++;
command = strtok(line, " \t\n");
if (command != NULL && strcmp(command, "push") == 0)
{
char *value_str = strtok(NULL, " \t\n");
if (value_str != NULL)
{

int value = atoi(value_str);
push_to_stack(&stack, value);
}
else
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
fclose(file);
return (EXIT_FAILURE);
}
}
else if (strcmp(command, "pall") == 0)
{
pall(stack);
}
}

fclose(file);
current = stack;
while (current != NULL)
{
/*printf("%d ", current->n);*/
current = current->next;
}
printf("\n");

current = stack;

while (current != NULL)
{
stack_t *temp = current;
current = current->next;
free(temp);
}

return (0);
}


#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define EXIT_FAILURE 1


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * interpreterData - holds various pieces of information related to interpreting Monty byte code
 *
 * line_number: represents the current execution line
 * file_name: represents the name of file being executed
 * command: represents the current command being executed
 * args: represents the arguments associated with the command
 * file: a pointer to a FILE structure representing the file being read
 * stack: a pointer to the head of stack
 * line: represents the line being executed
 */

typedef struct interpreterData {
	unsigned int line_number;
	char *file_name;
	char *command;
	char *args;
	FILE *file;
	stack_t *stack;
	char *line;
} intprt_data;

extern intprt_data input;


/* prototype functions */
void push_to_stack(stack_t **stack, unsigned int line_number);
void pall_stack(stack_t **stack, unsigned int line_number);
void execute_pint(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void read_line(void);
void execute_pop(stack_t **stack, unsigned int line_number);
void pop_from_stack(stack_t **stack, unsigned int line_number);
void swap_top_two(stack_t **stack, unsigned int line_number);
void add_stack(stack_t **stack, unsigned int line_number);
void nop_stack(stack_t **stack, unsigned int line_number);
void sub_stack(stack_t **stack, unsigned int line_number);
void div_stack(stack_t **stack, unsigned int line_number);
void mul_stack(stack_t **stack, unsigned int line_number);
void interpret_line(void);
int is_real_int(const char *str);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */

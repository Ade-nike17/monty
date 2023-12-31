#ifndef MONTY_H
#define MONTY_H
#define EXIT_FAILURE 1
extern int arg;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: intege
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

void push_to_stack(stack_t **stack, unsigned int line_number);
void pall_stack(stack_t **stack, unsigned int line_number);
void execute_pint(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void read_line(FILE *file, stack_t **stack);
void execute_pop(stack_t **stack, unsigned int line_number);
void pop_from_stack(stack_t **stack, unsigned int line_number);
void swap_top_two(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */

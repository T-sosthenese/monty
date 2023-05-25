#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INSTRUCTIONS \
{ \
	{"push", push}, \
	{"pall", pall}, \
	{"pint", pint}, \
	{"pop", pop}, \
	{"swap", swap}, \
	{"nop", nop}, \
	{"add", add}, \
	{ \
		NULL, NULL \
	} \
}

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
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct search_s - searches for the current opcode
 * @data_structure: stacking mode, default stack and queue
 * @arg: arguments passed in form of a string
 *
 * Description: a global data structure used to loop through opcodes
 */
typedef struct search_s
{
	int data_structure;
	char *arg;
} search_t;
search_t global;

void push(stack_t **stack, unsigned int value);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void execute_opcode(stack_t **stack, char *str, unsigned int line_number);
size_t stack_printing(const stack_t *stack);

int are_digits(char *str);
int are_numbers(char *s);
void file_err(char *argv);
void err_application(void);
void _freestack(stack_t *stack);

/* Linked lists utilities */
stack_t *_nodequeue(stack_t **stack, const int n);
stack_t *_addnode(stack_t **stack, const int n);

#endif /* MONTY_H */

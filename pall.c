#include "monty.h"

/**
 * pall - prints all values in the stack
 * @stack: double pointer to the stack whose values are to be printed
 * @line_number: the line number containing monty opcode
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_printing(*stack);
}

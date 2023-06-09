#include "monty.h"

/**
 * pint - prints value at the top of the stack
 * @stack: double pointer to stack whose value is to be printed
 * @line_number: the line containing monty opcode
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

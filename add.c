#include "monty.h"

/**
 * add - adds the top two elements of the stack together
 * @stack: double pointer to the stack whose elements are added
 * @line_number: line containg opcode in a monty file
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = ((*stack)->next->n + (*stack)->n);
	pop(stack, line_number);
	(*stack)->n = result;
}

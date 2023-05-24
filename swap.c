#include "monty.h"

/**
 * swap - swaps the top two elements of a stack
 * @stack: double pointer to the stack whose elements are swaped
 * @line_number: line containing monty opcode
 */

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

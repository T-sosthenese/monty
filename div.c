#include "monty.h"

/**
 * _division - divides the second top element of the stack by the top element
 * @stack: points to the stack to be manipulated
 * @line_number: the line number where the code runs into problem
 *
 * Return: nothing
 */

void _division(stack_t **stack, unsigned int line_number)
{
	int quotient;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
		;
		return;
	}

	quotient = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = quotient;
}

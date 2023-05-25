#include "monty.h"

/**
 * _modulus - finds the remainder of a division process
 * @stack: points to the stack whose remainder is to be determined
 * @line_number: the current line number in the program
 *
 * Return: nothing
 */

void _modulus(stack_t **stack, unsigned int line_number)
{
	int remainder;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	remainder = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = remainder;
}

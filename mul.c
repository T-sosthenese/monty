#include "monty.h"

/**
 * _multiplication - multiplies the second top element with the top element
 * @stack: points to the stack that will be manipulated
 * @line_number: the current line in a program file
 *
 * Return: nothing
 */

void _multiplication(stack_t **stack, unsigned int line_number)
{
	int final_result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	final_result = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = final_result;
}

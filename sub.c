#include "monty.h"

/**
 * sub - subtracts the top element from the second element in the stack
 * @stack: points to stack_t struct
 * @line_number: the number of lines in the stack
 *
 * Return: Nothing
 */

void sub(stack_t **stack, unsigned int line_number)
{
	int difference;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	difference = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = difference;
}

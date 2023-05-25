#include "monty.h"

/**
 * _pchar - printing the integer at the top of stack as a character
 * @stack: points to the stack to be printed
 * @line_number: the current line count in the program
 *
 * Return: nothing
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}

#include "monty.h"

/**
 * push - pushes an integer into a stack
 * @stack: the stack which the integer is pushed into
 * @value: the value of the integer
 *
 * Return: nothing
 */

void push(stack_t **stack, unsigned int value)
{
	char *m = global.arg;

	if ((are_digits(m)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", value);
		exit(EXIT_FAILURE);
	}
	if (global.data_structure == 1)
	{
		if (!_addnode(stack, atoi(global.arg)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!_nodequeue(stack, atoi(global.arg)))
		{
			exit(EXIT_FAILURE);
		}
	}
}

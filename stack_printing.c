#include "monty.h"

/**
 * stack_printing - displays the contents of stack_t
 * @stack: pointer to the stack to be printed
 *
 * Return: number of items in the stack
 */

size_t stack_printing(const stack_t *stack)
{
	size_t elem = 0;

	if (stack == NULL)
		exit(EXIT_FAILURE);

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		elem++;
	}
	return (elem);
}

#include "monty.h"

/**
 * _freestack - frees the stack_t
 *  @stack: points to the stack that is to be freed
 *
 *  Return: nothing
 */

void _freestack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (current)
		{
			free(current);
			current = next;
			if (next)
			{
				next = next->next;
			}
		}
	}
}

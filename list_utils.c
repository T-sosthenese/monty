#include "monty.h"

/**
 * _nodequeue - adds a node in the stack_t queue
 * @stack: double pointer to the stack_t struct
 * @n: node number
 *
 * Return: pointer to the newly created node, NULL (otherwise)
 */

stack_t *_nodequeue(stack_t **stack, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *recent = *stack;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	if (!*stack)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*stack = new_node;
		return (new_node);
	}
	while (recent)
	{
		if (!recent->next)
		{
			new_node->next = NULL;
			new_node->prev = recent;
			recent->next = new_node;
			break;
		}
		recent = recent->next;
	}
	return (new_node);
}

/**
 * _addnode - appends a node at the beginning of stack_t
 * @stack: points to stack_t
 * @n: position of the new_node
 *
 * Return: pointer to the new_node, NULL (otherwise)
 */

stack_t *_addnode(stack_t **stack, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (!*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
	return (new_node);
}

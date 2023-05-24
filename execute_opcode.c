#include "monty.h"

/**
 * execute_opcode - compares current opcode with builtins
 * @stack: double pointer to the stack to be manipulated
 * @str: string to compare opcode with builtins
 * @line_number: the current line in opcode execution
 *
 * Return: nothing
 */

void execute_opcode(stack_t **stack, char *str, unsigned int line_number)
{
	int j = 0;

	instruction_t op_code[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_structure = 1;
		return;
	}
	while (op_code[j].opcode)
	{
		if (strcmp(op_code[j].opcode, str) == 0)
		{
			op_code[j].f(stack, line_number);
			return;
		}
		j++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, str);
	exit(EXIT_FAILURE);
}

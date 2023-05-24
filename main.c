#include "monty.h"
#define _POSIX_C_SOURCE 200809L
/**
 * main - checks the program
 * @argv: argument vector of arguments passed to the program
 * @argc: number of arguments passed to the program
 * Return: nothing
 */
int main(int argc, char **argv)
{
	FILE *file;
	size_t buff_len;
	char *buffer = NULL;
	char *str = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 1;
	int status = 0;

	global.data_structure = 1;
	if (argc != 2)
		err_application();
	file = fopen(argv[1], "r");
	if (!file)
		file_err(argv[1]);
	while ((getline(&buffer, &buff_len, file)) != (-1))
	{
		if (status)
			break;
		if (*buffer == '\n')
		{
			line_number++;
			continue;
		}
		str = strtok(buffer, " \t\n");
		if (!str || *str == '#')
		{
			line_number++;
			continue;
		}
		global.arg = strtok(NULL, " \t\n");
		execute_opcode(&stack, str, line_number);
		line_number++;
	}
	free(buffer);
	_freestack(stack);
	fclose(file);
	exit(EXIT_SUCCESS);
}

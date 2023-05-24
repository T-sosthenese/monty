#include "monty.h"

/**
 * file_err - displays all file error mesages
 * @argv: argument vector provided by the main function
 *
 * Descriptions: displays an error message if a file command cannot be run
 */

void file_err(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

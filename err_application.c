#include "monty.h"

/**
 * err_application - displays error messages then exits
 *
 * Description: Prints an err msg if the user does not provide
 *                filename or more than one arg
 */

void err_application(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

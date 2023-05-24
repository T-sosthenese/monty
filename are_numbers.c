#include "monty.h"

/**
 * are_numbers - checks whether the input string in a number
 * @s: points to the string to be assessed
 *
 * Return: 1 (is a number), 0 otherwise
 */

int are_numbers(char *s)
{
	int j;

	if (!s)
		return (0);
	for (j = 0; s[j]; j++)
		if (j < '0' || j > '9')
			return (0);
	return (1);
}

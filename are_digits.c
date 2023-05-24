#include "monty.h"

/**
 * are_digits - checks whether inputted string is a digit
 * @str: pointer to the inputted string
 *
 * Return: 1 (success), 0 (failure)
 */

int are_digits(char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

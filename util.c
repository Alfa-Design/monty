#include <ctype.h>
#include "monty.h"

/**
 * is_digit - check whether string is a digit
 * @string: to be checked
 *
 * Return: if success 1, else 0
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
/**
 * isnumber - check whether a string is a number
 * @str: string to be checked
 *
 * Return: 1 if string is number else 0
 */
int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}

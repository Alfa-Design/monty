#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: from main
 * @line_cnt: number of lines
 *
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
}

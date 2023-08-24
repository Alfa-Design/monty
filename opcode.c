#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"

/**
 * opcode: function for running builtins
 * @stack: from main
 * @str: string to compare
 * @line_cnt: number of lines
 *
 * return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
	int i = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, str) == 0)
		{
			op[i].f(stack, line_cnt);
			return; /* if we found a match, run the function */
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, str);
	status = EXIT_FAILURE;
}

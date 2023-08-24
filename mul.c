#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _mul - multiplies next top value by top value
 * @stack: from main
 * @line_cnt: number of lines
 *
 * return: nothing
 */
void _mul(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_cnt);/*For top node*/
	(*stack)->n = result;
}

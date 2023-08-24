#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "monty.h"

/**
 * mod: calculates remainder of division
 * @stack: from main
 * @line_cnt: number of lines 
 *
 * return: nothing
 */
void mod(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_cnt);/*For top node*/
	(*stack)->n = result;
}

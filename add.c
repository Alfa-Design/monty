#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _add -  adds first two nodes of stack
 * @stack: from main
 * @line_cnt: number of lines
 *
 * Return: nothing
 */
void _add(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_cnt);/*For top node*/
	(*stack)->n = result;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "monty.h"

/**
 * _sub -  substracts first two nodes of a stack
 * @stack: from main
 * @line_cnt: number of lines
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_cnt);/*For top node*/
	(*stack)->n = result;
}

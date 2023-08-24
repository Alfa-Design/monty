#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* pop - get top element
* @stack: stack from main
* @line_cnt: number of error messages in line
*
* Return: nothing
*/
void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return; /* prevents errors cause next line might assign a NULL */
	(*stack)->prev = NULL;
}

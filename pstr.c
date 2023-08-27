#include "monty.h"
/**
 * f_pstr - prints string starting from top of the stack
 * then by a new
 * @head: head of stack
 * @counter: line_number counter
 * Return: always 0
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

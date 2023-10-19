#include "monty.h"
/**
 * f_pall - prints the stack
 * @top: stack top
 * @tally: no used
 * Return: no return
*/
void f_pall(stack_t **top, unsigned int tally)
{
	stack_t *h;
	(void)tally;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}


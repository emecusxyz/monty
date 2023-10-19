#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @top: stack top
 * @tally: line_number
 * Return: no return
*/
void f_pstr(stack_t **top, unsigned int tally)
{
	stack_t *h;
	(void)tally;

	h = *top;
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


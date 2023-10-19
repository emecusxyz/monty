#include "monty.h"
/**
 * f_pop - prints the top
 * @top: stack top
 * @tally: line_number
 * Return: no return
*/
void f_pop(stack_t **top, unsigned int tally)
{
	stack_t *h;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", tally);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	*top = h->next;
	free(h);
}


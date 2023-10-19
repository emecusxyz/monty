#include "monty.h"
/**
  *f_sub- sustration
  *@top: stack top
  *@tally: line_number
  *Return: no return
 */
void f_sub(stack_t **top, unsigned int tally)
{
	stack_t *aux;
	int sus, nodes;

	aux = *top;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", tally);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	aux = *top;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*top = aux->next;
	free(aux);
}


#include "monty.h"
/**
 * f_pint - prints the top
 * @top: stack top
 * @tally: line_number
 * Return: no return
*/
void f_pint(stack_t **top, unsigned int tally)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", tally);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}


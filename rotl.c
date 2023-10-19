#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@top: stack top
  *@tally: line_number
  *Return: no return
 */
void f_rotl(stack_t **top,  __attribute__((unused)) unsigned int tally)
{
	stack_t *tmp = *top, *aux;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	aux = (*top)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = aux;
}


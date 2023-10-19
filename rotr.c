#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@top: stack top
  *@tally: line_number
  *Return: no return
 */
void f_rotr(stack_t **top, __attribute__((unused)) unsigned int tally)
{
	stack_t *copy;

	copy = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *top;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*top)->prev = copy;
	(*top) = copy;
}


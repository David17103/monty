#include "monty.h"
/**
 * f_pchar - prints char at top of stack,
 * followed by new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		free(bus.content);
		free_stack(*head);
		fclose(bus.file);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		free(bus.content);
		free_stack(*head);
		fclose(bus.file);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}

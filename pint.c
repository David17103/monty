#include "monty.h"
/**
 * f_pint - prints top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		free_stack(*head);
		free(bus.content);
		fclose(bus.file);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

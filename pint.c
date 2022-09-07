#include "monty.h"
/**
 * f_pint - function that prints the value at the top of the stack,
 * followed by a new line.
 * @head: top of the stack
 * @number: value inputed
 * Reurn: no return
 */
void f_pint(stack_t **head, unsigned int number)
{
if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

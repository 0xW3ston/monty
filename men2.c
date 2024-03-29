#include "header.h"
/**
 *pop - removes the last inserted element
 *@counter: Argument 1
 *@stack: Argument 2
 *Return: null
 */
void pop(stack_t **stack, unsigned int counter)
{
	stack_t *end;

	if (stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	else if (*stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	else
	{
		end = *stack;
		*stack = (*stack)->next;
		free(end);
	}
	return;
}

#include "header.h"
/**
*pint - print the data at the top
*@stack: Argument 1
*@counter: Argument 2
*Return: null
*/
void pint(stack_t **stack, unsigned int __attribute__((unused)) counter)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

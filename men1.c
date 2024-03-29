#include "header.h"

/**
* len - length of stack
* @stack: Argument
* Return: unsigned int
**/
unsigned int len(stack_t **stack)
{
	stack_t *curr;
	unsigned int l = 0;

	curr = *stack;
	while (curr)
	{
		curr = curr->next;
		l++;
	}
	return (l);
}

/**
*pall - function to print stack's elements
*@counter: Argument
*@stack: Argument 2
*Return: null
*/

void pall(stack_t **stack, unsigned int __attribute__((unused)) counter)
{
	stack_t *curr = *stack;

	if (stack == NULL || *stack == NULL)
		return;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}


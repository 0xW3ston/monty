#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>


#define DELIMATOR "\n\t\r "
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 **/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 **/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int counter);
} instruction_t;

/**
* struct global_s - hold global variables
* @return_val: return value
* @mol: mode of list
* @cc: code command
* @apc: push command
**/

unsigned int len(stack_t **stack);
extern instruction_t opcodes[];
void swap(stack_t **stack, unsigned int counter);
void free_stack(stack_t *stack);
void nop(stack_t **stack, unsigned int counter);
void pop(stack_t **stack, unsigned int counter);
void pall(stack_t **stack, unsigned int counter);
void push(stack_t **stack, char *n, unsigned int counter);
int find_opcode(stack_t **stack, char *opcode, int counter);
void pint(stack_t **stack, unsigned int counter);

#endif /* MAIN_HEADER */

#include "monty.h"
int value;
/**
 * createnode - create a new node
 * @i: the value of the node
 * Retrurn: the new node
 */
stack_t *createnode(int i)
{
	strack_t *new = NULL;
	new = malloc(sizeof(strack_t));
	if (new == NULL)
	{
		fprint(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
/**
 * pall - print all the values of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the current line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	(void)line_number;

	tmp = *stack;
	
	while (tmp != NULL)
	{
		fprintf(stdout, "%D\n", tmp->i);
		tmp = tmp->next;
	}
}
/**
 * push - pushes a new node with the given value to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: value to be pushed
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = createnode(value);

	new->next  = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: the current line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack || stack)
	{
		fprint(stderr, "L%d: can't pint, stack empty\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "%d\n", (*stack)->i);
}
/**
 * pop - removes the top elemet of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the current line number
 */
`void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	if (!*stack)
	{
		fprint(srderr, "L%u: can't pop an empty stack\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*stack)->next;
		free(*stack);
		if (temp)
			temp->prev = NULL;
		*stack = temp;
	}
}

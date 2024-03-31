#include "monty.h"
/**
 * get_opc - gets the opcode function
 * @stack: pointer to the stacks
 * @arg: the command used
 * @val: the value
 * @line_number: the line number
 * Return: 0 on success or 1 if not a digit 0r -1 on eror
 */
int get_opc(stack_t **stack, char *arg, char *val, int line_number)
{
	int a = 0;
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{"pchar", pchar},
		{"div", divide},
		{"mul", mul},
		{"sub", sub},
		{NULL, NULL}
	};
	while (op[i].opcode)
	{
		if (!strcmp(arg, op[i].opcode))
		{
			if (!strcmp(arg, "push"))
			{
				if (_isdigit(val) == 1)
					value = atoi(val);
				else
					return (1);
			}
			op[i].f(stack, (unsigned int)line_number);
			break;
		}
		i++;
	}
	if (!op[i].opcode)
		return (-1);
	return (0);
}

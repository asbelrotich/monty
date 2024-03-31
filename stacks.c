#include "monty.h"
/**
 * _free - free the stacks
 * @stack: stack
 */
void _free(stack_t *stack)
{
	stack_t *list = NULL:
		list = stack;
	if (list != NULL)
	{
		_free(list->next);
		free(list);
	}

}
/**
 * cleam_stack - free all and close files
 * @stack: stacks
 */
void cleam_stack(stack_t ** stack)
{
	stack_t *tmp = *stack;
	free(tmp);
}
fclose(cmd.fd);
free(cmd.line);
}

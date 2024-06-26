#include "monty.h"
cmd_t cmd = {NULL, NULL};
/**
 * execute - reads the file and executes the monty byte
 * @argv: argument vector
 */
void execute(char *argv)
{
	int line = 0, r = 0;
	size_of buffsize = 0;
	char *token = NULL, *val = NULL;
	stack_t *stack = NULL;

	cmd.fd = fopen(argv, 'r');
	if (cmd.fd)
	{
		while (getline(&cmd.line, &bufsize, cmd.fd) != -1)
		{
			line++;
			token = strtok(cmd.line, "\n\t\r");
			if (token == NULL)
			{
				free(token);
				continue;
			}
			else if (*token == '#')
				continue;
			val = strtok(NULL, "\n\t\r");
			r = get_opc(&stack, token, val line);
			if (r == 10)
				push_error(cmd.fd, cmd.line, stack, line);
			else if (r == -1)
				inst_error(cmd.fd, cmd.line, stack, token, line);
		}
		free(cmd.line);
		_free(stack);
		fclose(cmd.fd);
	}
	else
	{
		open_error(argv);
	}
}

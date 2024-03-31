#include "monty.h"
/**
 * usage_error - prints the  error message
 * Return: failure
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: MONTYFILE\n");
	exit(EXIT_FAILURE);
}
/**
 * open_error - prints an open file error message
 * @file: file
 * Return: FAILURE
 */
void open_error(char *file)
{
	fprintf(stderr, "ERROR: can't open file%s\n", file);
	exit(EXIT_FAILURE);
}
/**
 * push_error - Error handles a push error
 * @stack: stack or queue
 * @fd: file desciptor
 * @line_number: line number of the command
 * @line: buffer
 */
void push_error(FILE *fd, char *line, stack_t *stack, int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	fclose(fd);
	_free(stack);
	exit(EXIT_FAILURE);
}
/**
 * ins_error - Error handler for unknown instructions
 * @fd: file descriptor
 * @line: buffer
 * @stack: stack or queue
 * @line_n: line number of the command
 * @value: instruction
 */
void ins_error(file *fd, char *line, stack_t *stack, char *value, int line_n)
{
	fprint(stderr, "L%U: unlnown instruction %s\n", line_n, value);
	fclose(fd);
	free(line);
	_free(stack);
	exit(EXIT_FAILURE);
}

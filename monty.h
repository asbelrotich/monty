#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
extern int info;
/**
 * struct cmd_s - cmd
 * @fd: file descriptor
 * @line: line
 */
typedef struct cmd-s
{
	FILE *fd;
	char *line;
}cmd_t;
extern cmd_t cmd;
exter int value;
/**
 * struct stack_s - double linked list re[presentation of a stack
 * @n: integer
 * @prev: points to the previous element of the stack
 * @next: points to the next element of t5he stack
 *
 * Description: double linked list node structure
 * for stack, qeues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack-s *next;
}stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its functions
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
}
instruction_t;
void execute(char *argv);
#endif

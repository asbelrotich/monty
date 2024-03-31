#include "monty.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: success or failure
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		usage_error();
	}
	else
	{
		execute(argv[1]);
	}
	return (EXIT_SUCCESS);
}

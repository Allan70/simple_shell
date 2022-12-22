#include <stdio.h>
#include "header.h"

/**
 * main - This is a main function for a simple shell
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Returns an EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	shell_loop();

	shell_shutdown();

	return (EXIT_SUCCESS);
}

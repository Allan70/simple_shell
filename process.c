#include <stdio.h>
#include "headers.h"

/**
 * shell_launch - A function that starts a process
 *
 * @arguments: Accepting line arguments
 * Return: 1
 */

int shell_launch(char **arguments)
{
	pid_t pid;
	
	pid = fork();
	if (pid == 0)
	{
		if (execvp(arguments[0], arguments) == -1)
		{
			perror("shell");
		}
		exit(EXIT_FAILURE);
	}else if (pid < 0)
	{
		perror("shell");
	}

	return (1);
}

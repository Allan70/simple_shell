#include <stdio.h>

/**
 * shell_launch - A function that starts a process
 *
 * @arguments: Accepting line arguments
 * Return: 1
 */

int shell_launch(char **arguments)
{
	pid_t pid, wpid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(arguments[0], arguments) == -1)
		{
			perror("shell");
		}
		exit(EXIT_FAILIURE);
	}
	else if (pid < 0)
	{
		perror("shell");
	}
	else
	{
		do
		{
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WTFSIGNALED(status));
	}
	return (1);
}

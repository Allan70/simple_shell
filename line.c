#include <stdio.h>
#include "headers.h"

/**
 * shell_read_line - Function to read the contents of a line in  the shell
 *
 * Return: A string of characters is returned
 */

char *shell_read_line(void)
{
	char *line = NULL;
	ssize_t buffer_size = 0;

	if (getline(&line, &buffer_size, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		} else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}

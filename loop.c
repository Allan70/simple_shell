#include <stdio.h>
#include "headers.h"

/*
 * bash_loop - This is where the shell will run in its loop *
 */

void bash_loop(void)
{
	char *current_line;
	char **arguments;
	int status;

	do {
		printf("($) ");
		current_line = shell_read_line();
		arguments = shell_split_line(current_line);
		status = shell_execute(arguments);

		free(current_line);
		free(arguments);
	} while (status);
}

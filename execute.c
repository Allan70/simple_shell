#include <stdio.h>
#include "headers.h"

/**
 * shell-execute - The function that launches a process or a built in
 *
 * @arguments: These characters forming our arguments
 * Return: An integer of 1 or the shell_launch() function
 */

int shell_execute(char **arguments)
{
	int i;

	if (arguments[0] == NULL)
	{
		return (1);
	}

	for (i = 0; i < shell_num_builtins(); i++)
	{
		if (strcmp(arguments[0], builtin_strings[i]) == 0)
		{
			return ((*builtin_func[i])(arguments));
		}
	}
	return shell_launch(arguments);
}

#include <stdio.h>
#include "headers.h"

/**
 * We will begin function declarations for built in shell commands.
 */

int shell_num_builtins()
{
	return (sizeof(builtin_strings)/sizeof(char *));
}

int shell_cd(char **arguments)
{
	if (arguments[1] == NULL)
	{
		fprintf(stderr, "shell: expected rgument to \"cd\"\n");
	} else
	{
		if (chdir(arguments[1]) != 0)
		{
			perror("shell");
		}
	}
	return (1);
}

int shell_help()
{
	int i;
	printf("Welcome to Simple Shell help\n");
	printf("Type program names and arguments, and hit enter.\n");
	printf("The following are built in:\n");

	for (i = 0; i < shell_num_builtins();i++)
	{
		printf(" %s\n", builtin_strings[i]);
	}

	printf("Use the man command for information on other programs. \n");
	return (1);
}

int shell_exit()
{
	return (0);
}

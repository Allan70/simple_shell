#include <stdio.h>
#include "headers.h"

#define SHELL_TOKEN_BUFFER_SIZE 64
#define SHELL_TOKEN_DELIMITER " \t\r\n\a"

/**
 * shell_split_line - This function parses the line in our shell
 *
 * @line: The function takes the nine from he shell as input
 *
 * Return: A tiken is returned
 */

char **shell_split_line(char *line)
{
	int buffer_size = SHELL_TOKEN_BUFFER_SIZE, position = 0;
	char **tokens = malloc(buffer_size * sizeof(char *));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "shell: allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, SHELL_TOKEN_DELIMITER);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= buffer_size)
		{
			buffer_size += SHELL_TOKEN_BUFFER_SIZE;
			tokens = realloc(tokens, buffer_size * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "shell: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, SHELL_TOKEN_DELIMITER);
	}
	tokens[position] = NULL;
	return (tokens);
}

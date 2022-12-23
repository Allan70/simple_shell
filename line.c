#include <stdio.h>

/**
 * shell_read_line - Function to read the contents of a line in  the shell
 *
 * Return: A string of characters is returned
 */

char *shell_read_line(void)
{
	int buffer_size = shell_rl_buffer_size;
	int position = 0;
	char *buffer = malloc(sizeof(char) * buffer_size);
	int c;

	if (!buffer) {
		fprintf(stderr, "shell: allocation error\n");
		exit(EXIT_FAILIURE);
	}

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			buffer[position] = '\0';
			return buffer;
		} else {
			buffer[position] = c;
		}
		position++;

		if (position >= buffer_size)
		{
			buffer_size += shell_rl_buffer_size;
			buffer = realloc(buffer, buffer_size);
			if (!buffer) {
				fprintf(stderr, "shell: allocation error\n");
				exit(EXIT_FAILIURE);
			}
		}
	}
}

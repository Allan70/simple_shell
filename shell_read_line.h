char *shell_read_line(void)
{
#ifdef SHELL_USE_STD_GETLINE
	char *line = NULL;
	ssize_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("shell: getline\n");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
#else
#define SHELL_RL_BUFSIZE 1024
	int bufsize = SHELL_RL_BUFSIZE;
	int position = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;

	if (!buffer){
		fprintf(stderr, "shell: allocation error\n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();

		if (c == EOF) {
			exit(EXIT_SUCCESS);
		} else if (c == '\n')
		{
			buffer[position] = '\0'';
			return (buffer);
		}
		else
		{
			buffer[position] = c;
		}

		position++;

		if (position >= bufsize) {
			bufsize += SHELL_RL_BUFSIZE;
			buffer = realloc(buffer, bufsize);
			if (!buffer) {
				fprintf(stderr, "shell: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
#endif
}

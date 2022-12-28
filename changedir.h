int shell_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf (stderr, "shell: expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("shell");
		}
	}
	return 1;
}

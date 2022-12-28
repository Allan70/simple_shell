int shell_help()
{
	int i;
	printf("Simple Shell\n");
	printf("Enter command names and their arguments here.\n");
	printf("The following are built in:\n");

	for (i = 0; i < shell_num_builtins(); i++)
	{
		printf(" %s\n", builtin_str[i]);
	}

	printf("Use the man command for information on various commands \n");
	return (1);
}

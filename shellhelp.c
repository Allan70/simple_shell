int shell_help()
{
	int i;
	printf("Simple Shell\n");
	printf("Type program names and arguments, and hit enter.\n");
	printf("The following are built in:\n");
	printf("You can also use the man command to view more infomation on commands");

	for (i = 0; i < shell_num_builtins(); i++)
	{
		printf(" %s\n", builtin_str[i]);
	}

	return (1);
}

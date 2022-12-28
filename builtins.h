int shell_cd(char **args);
int shell_help();
int shell_exit();

char *builtin_str[] = {
	"cd",
	"help",
	"exit"
};

int (*builtin_func[])(char **) = {
	&shell_cd,
	&shell_help,
	&shell_exit
}

int shell_num_builtins()
{
	return (sizeof(builtin_str) / sizeof(char *));
}

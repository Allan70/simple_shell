#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Function declarations
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


int shell_num_builtins();
int shell_cd(char **args);
int shell_execute(char **args);
int shell_exit();
int shell_help();
int shell_launch(char **args);
void shell_loop(void);
char *shell_read_line(void);
char **shell_split_line(char *line);

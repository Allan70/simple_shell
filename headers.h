#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/* Shell Function Prototypes */
int shell_execute(char **arguments);
char *shell_read_line(void);
void bash_loop(void);
char **shell_split_line(char *line);
int shell_launch(char **arguments);
int shell_num_builtins();

/* Builins prototypes */
int shell_cd(char **arguments);
int shell_help(char **arguments);
int shell_exit(char **arguments);

/*List of built in commands */
char *builtin_string[] = {
	"cd",
	"help",
	"exit"
};

/** buit in functions pointer */
int (*builtin_func[])(char **) = {
	&shell_cd,
	&shell_help,
	&shell_exit
};

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

/* Builins prototypes */
int shell_cd(char **arguments);
int shell_help(char **arguments);
int shell_exit(char **arguments);

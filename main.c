#include "./headers.h"
#include "builtins.h"
#include "changedir.h"
#include "shellexecute.h"
#include "shellexit.h"
#include "shellhelp.h"
#include "shellLaunch.h"
#include "shellLoop.h"
#include "shell_read_line.h"
#include "shell_split_line.h"

int main(void)
{
	shell_loop();

	return (EXIT_SUCCESS);
}

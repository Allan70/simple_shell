#include <stdio.h>

int main (int argc, char **argv)
{
	shell_loop();

	shell_shutdown();

	return EXIT_SUCCESS;
}

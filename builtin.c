/*
 * shell_num_builtins - A function calculate size of builtin string
 *
 * Return: integer
 */

int shell_num_builtins(void)
{
	return (sizeof(builtin_str) / sizeof(char *));
}

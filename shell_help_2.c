#include "main.h"
/**
 * _help_env - Help information
 */
void _help_env(void)
{
	char *help = "env: env [option] [name=value] [command [args]]\n\t";

	_print(help);
	help = "Print the enviroment of the shell.\n";
	_print(help);

}
/**
 * _help_setenv - Help information
 */
void _help_setenv(void)
{
	char *help = "setenv: setenv (const char *name, const char *value,";

	_print(help);
	help = "int replace)\n\t";
	_print(help);
	help = "Add a new definition to the environment\n";
	_print(help);
}
/**
 * _help_unsetenv - Help information
 */
void _help_unsetenv(void)
{
	char *help = "unsetenv: unsetenv (const char *name)\n\t";

	_print(help);
	help = "Remove an entry completely from the environment\n";
	_print(help);
}

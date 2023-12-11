#include "main.h"

/**
 * get_help - function that retrieves help messages
 * @datash: data structure (args and input)
 * Return: Return 0
*/
int get_help(data_shell *datash)
{

	if (datash->args[1] == 0)
		_help_general();
	else if (_strcmp(datash->args[1], "setenv") == 0)
		_help_setenv();
	else if (_strcmp(datash->args[1], "env") == 0)
		_help_env();
	else if (_strcmp(datash->args[1], "unsetenv") == 0)
		_help_unsetenv();
	else if (_strcmp(datash->args[1], "help") == 0)
		_help();
	else if (_strcmp(datash->args[1], "exit") == 0)
		_help_exit();
	else if (_strcmp(datash->args[1], "cd") == 0)
		_help_cd();
	else if (_strcmp(datash->args[1], "alias") == 0)
		_help_alias();
	else
		_printerr(datash->args[0]);

	datash->status = 0;
	return (1);
}

/**
 * _help - Help information for the builtin help
 */
void _help(void)
{
	char *help = "help: help [-dms] [pattern ...]\n";

	_print(help);
	help = "\tDisplay information about builtin commands.\n ";
	_print(help);
	help = "Displays brief summaries of builtin commands.\n";
	_print(help);
}
/**
 * _help_alias - Help information for the builtin alias
 */
void _help_alias(void)
{
	char *help = "alias: alias [-p] [name[=value]...]\n";

	_print(help);
	help = "\tDefine or display aliases.\n ";
	_print(help);
}
/**
 * _help_cd - Help information for the builtin alias
 */
void _help_cd(void)
{
	char *help = "cd: cd [-L|[-P [-e]] [-@]] [dir]\n";

	_print(help);
	help = "\tChange the shell working directory.\n ";
	_print(help);
}

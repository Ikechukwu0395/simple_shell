#include "main.h"
/**
 * _help_general - Entry point for help information
 */
void _help_general(void)
{
	char *help = "Ikechukwu-shell bash, version 1.0-release. Copyright 2023\n";

	_print(help);
	help = "These commands are defined internally.Type 'help' to see the list";
	_print(help);
	help = "Type 'help name' to find out more about the function 'name'.\n\n ";
	_print(help);
	help = " alias: alias [name=['string']]\n cd: cd [-L|[-P [-e]] [-@]] ";
	_print(help);
	help = "[dir]\nexit: exit [n]\n  env: env [option] [name=value] [command ";
	_print(help);
	help = "[args]]\n  setenv: setenv [variable] [value]\n  unsetenv: ";
	_print(help);
	help = "unsetenv [variable]\n";
	_print(help);
}
/**
 * _help_exit - Help information fot the builint exit
 */
void _help_exit(void)
{
	char *help = "exit: exit [n]\n Exit shell.\n";

	_print(help);
	help = "Exits the shell with a status of N. If N is ommited, the exit";
	_print(help);
	help = "status is that of the last command executed\n";
	_print(help);
}


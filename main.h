#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <limits.h>

#define BUFSIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\r\n\a"

/* shell */
char *no_comment(char *in);
void shell(data_shell *datash);

/* environ_1 */
char *copy_info(char *name, char *value);
void set_env(char *name, char *value, data_shell *datash);
char *_getenv(const char *name, char **_environ);


/* environ2 */
int _env(data_shell *datash);
int _setenv(data_shell *datash);
int _unsetenv(data_shell *datash);


#endif/*MAIN_H BY OKORO IKECHUKWU MACDOUGLAS */

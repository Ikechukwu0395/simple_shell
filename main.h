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

/* read-line_1, line_0.c, line_1.c */
char *read_line(int *i_eof);
void bring_line(char **lineptr, size_t *n, char *buffer, size_t j);
ssize_t get_line(char **lineptr, size_t *n, FILE *stream);
int exec_line(data_shell *datash);

/* lists_1.c, lists_2.c */
sep_list *add_sep_node_end(sep_list **head, char sep);
void free_sep_list(sep_list **head);
line_list *add_line_node_end(line_list **head, char *line);
void free_line_list(line_list **head);
r_var *add_rvar_node(r_var **head, int lvar, char *val, int lval);
void free_rvar_list(r_var **head);


/* my_stdlib.c */
int get_len(int n);
char *get_itoa(int n);
int _itoa(char *s);

/* _exit */
int exit_shell(data_shell *datash);

/* shell_help_0.c, shel_help_1.c shel_help_2.c*/
void _help(void);
void _help_alias(void);
void _help_cd(void);
void _help_env(void);
void _help_setenv(void);
void _help_unsetenv(void);
void _help_general(void);
void _help_exit(void);
int get_help(data_shell *datash);


/* _str 1, 2 & 3 */
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
char *_strdup(const char *s);
int _strlen(const char *s);
int cmp_chars(char str[], const char *delim);
char *_strtok(char str[], const char *delim);
int _isdigit(const char *s);
void rev_string(char *s);


#endif/*MAIN_H BY OKORO IKECHUKWU MACDOUGLAS */

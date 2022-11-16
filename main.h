#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#define MAX_LIST 100
#define MAX_COUNT 2000

char **readcommand(void);
int _strcmp(char *s1, char *s2);
int builtinhandler(char **argv, char **env);
int execCall(char **argv, char **env);
void _puts(char *str);
int _putchar(char c);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *find_pathname(char *cmd, char **env);
void _puts2(char *str);

#endif /* MAIN_H */

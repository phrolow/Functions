#ifndef FUNCTIONS
#define FUNCTIONS
#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <TXLib.h>

const int MAXLINE = 1000;

int customPuts(const char *s);
char *customStrchr(char *s, char c);
int customStrlen(char *str);
char *customStrcpy(char *s, char *t);
char *customStrncpy(char *s, char *t, int n);
char *customStrcat(char *s, char *t);
char *customFgets(char *s, int n, FILE *stream);
char *customStrdup(char *s);
int customGetline (char **string, int *n, FILE *stream);

#endif

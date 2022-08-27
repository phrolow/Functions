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
char *customStrchr(const char *s, int c);
size_t customStrlen(const char *str);
char *customStrcpy(char *s, const char *t);
char *customStrncpy(char *dest, const char *source, size_t n);
char *customStrcat(char *str1, const char *str2);
char *customFgets(char *s, int n, FILE *stream);
char *customStrdup(char *s);
int customGetline (char **string, int *n, FILE *stream);

#endif

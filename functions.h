#ifndef FUNCTIONS
#define FUNCTIONS

#include <stdio.h>
#include <assert.h>
#include <TXLib.h>

const int MAXLINE = 1000;

int customPuts(char *s);                            //Функция puts() выводит строку, указанную str, на стандартное устройство вывода. Нуль в кон­це строки транслируется в новую строку. Функция puts() возвращает символ «новая строка» в случае успеха и EOF — при неудаче.
char *customStrchr(char *s, char c);                // возвращает указатель на первое появление символа c в s или, если c нет в s, NULL
int customStrlen(char *str);                        // возвращает длину s.
char *customStrcpy(char *s, char *t);               // копирует t в s
char *customStrncpy(char *s, char *t, int n);       // копирует не более n символов из t в s
int customStrcat(char *s, char *t);                 // приписывает t в конец s
char *customFgets(char *s, int n, FILE *stream);    // fgets читает не более n-1 символов в массив s, прекращая чтение, если встретился символ новой строки, который включается в массив; кроме того, записывает в массив '\0'. Функция fgets возвращает s или, если исчерпан файл или обнаружена ошибка, NULL.
char *customStrdup(char *);                         // путем обращения к функции malloc() выделяет память, достаточную для хранения дубликата строки, на которую указывает str, а затем производит копирование этой строки в выделенную область и возвращает указатель на нее.
int getline (char **string, int *n, FILE *stream);  // потом

#endif

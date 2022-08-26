#include "functions.h"

int customPuts(char *s) {
    assert(s);

    int i = 0;
    while(s[i] != '\0')
        if(putchar(s[i++]) != EOF)
            ;
        else
            return EOF;

    return '\n';
}

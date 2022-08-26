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

char *customStrchr(char *s, char c) {
    assert(s);

    int i = 0;

    while(s[i] != '\0')
        if(s[i] == c)
            return s + i;
        else
            i++;

    return NULL;
}

int customStrlen(char *s) {
    assert(s);

    int i = 0;

    while(s[i++] != '\0')
        ;

    return --i;
}

char *customStrcpy(char *s, char *t) {
    assert(s && t);

    char *res = s;

    while ((*s = *t) != '\0' ) {
        s++;
        t++;
    }

    return res;
}

char *customStrncpy(char *s, char *t, int n) {
    assert(s && t);

    char *res = s;
    int i = 0;

    while((s[i] = t[i]) != '\0' && ++i < n)
        ;

    s[i] = '\0';

    return res;
}

int customStrcat(char *s, char *t) {
    assert(s && t);

    int lens = 0
    lens = customStrlen(s);


}

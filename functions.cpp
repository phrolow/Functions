#include "functions.h"

int customPuts(const char *s) {
    while(*s != '\0')
        if(putchar(*(s++)) != EOF)
            ;
        else
            return EOF;

    return putchar('\n');
}

char *customStrchr(const char *str, int ch) {
    while(*str != '\0')
        if(*str == ch)
            return (char*) str;
        else
            str++;

    return NULL;
}

/* size_t customStrlen(char *s) {
    assert(s);

    int i = 0;

    while(s[i++] != '\0')
        ;

    return --i;
}

char *customStrcpy(char *s, char *t) {
    assert(s && t);

    char *res = s;

    while ((*(s++) = *(t++)) != '\0' )
        ;

    return res;
}

char *customStrncpy(char *s, char *t, int n) {
    assert(s && t);

    int i = 0;

    while((s[i] = t[i]) != '\0' && ++i < n)
        ;

    s[i] = '\0';

    return s;
}

char *customStrcat(char *s, char *t) {
    assert(s && t);

    int lens = 0,
        i = 0;

    lens = customStrlen(s);

    while((*(s + lens + (i++)) = *(t++)) != '\0')
        ;

    return s;
}

char *customFgets(char *s, int n, FILE *stream) {
    assert(s && stream);

    int i = 0;

    while(i < n && (*(s + (i++)) = getc(stream)) != EOF)
        ;

    *(s + i) = '\0';

    return s;
}

char *customStrdup(char *s) {
    assert(s);

    int slen = 0;
    char *scopy = NULL;

    slen = customStrlen(s);

    scopy = (char*)malloc((slen + 1) * sizeof(char));
    customStrcpy(scopy, s);

    return scopy;
}

int customGetline (char **s, int *n, FILE *stream) {                                  //realloc calloc
                                                                                      //malloc calloc кр
    assert(s && *s && n && stream);

    int i = 0;
    char c = EOF;

    while(i < *n && (c = getc(stream)) != '\n' && c != EOF) {
        (*s)[i++] = c;
    }

    (*s)[i] = '\0';

    return i;
}
    */

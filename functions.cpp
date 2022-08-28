#include "functions.h"

int customPuts(const char *s) {
    while(*s != '\0')
        if(putchar(*(s++)) != EOF)
            ;
        else
            return EOF;

    return putchar('\n');
}

const char *customStrchr(const char *str, int ch) {
    while(*str != '\0')
        if(*str == ch)
            return str;
        else
            str++;

    return NULL;
}

size_t customStrlen(const char *s) {
    size_t i = 0;

    while(s[i] != '\0')
        i++;

    return i;
}

char *customStrcpy(char *s, const char *t) {
    assert(s && t);

    int i = 0;

    while((s[i] = t[i]) != '\0')
        i++;

    s[i] = '\0';

    return s;
}

char *customStrncpy(char *dest, const char *source, size_t count) {
    size_t i = 0;

    while(i < count || source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }

    while(i < count) {
        dest[i] = '\0';
        i++;
    }

    return dest;

}

int customStrcmp(const char *str1, const char *str2) {
    do {
        if(*str1 > *str2) {
            return 1;
        } else if(*str1 < *str2) {
            return -1;
        }

        str2++;
    } while(*(str1++) != '\0');

    return 0;
}

char *customStrcat(char *str1, const char *str2) {
    assert(str1 && str2);

    size_t  str1Len = 0,
            i = 0;

    str1Len = strlen(str1);

    while(str2[i] != '\0') {
        str1[str1Len + i] = str2[i];
        i++;
    }

    str1[str1Len + i] = '\0';

    return str1;
}

char *customFgets(char *s, int n, FILE *stream) {
    int i = 0;

    while(i < (n - 1) && (s[i] = (char) getc(stream)) != EOF && !ferror(stream))
        i++;

    s[i] = '\0';

    if(i == (n - 1))
        return s;

    return NULL;
}

char *customStrdup(const char *s) {
    size_t sLen = 0;
    char *sCopy = NULL;

    sLen = strlen(s);
    sCopy = (char*)calloc(sLen + 1, sizeof(char));

    strcpy(sCopy, s);

    return sCopy;
}

ssize_t customGetline (char **lineptr, size_t *n, FILE *stream) {
    /* реализация говна
    по крайней мере памяти не такой пиздец как если все время юзать realloc */

    if(n == NULL)
        return -1;

    char inp[MAXLINE] = {};
    ssize_t i = 0;
    size_t inpLen = 0;

    while((inp[i] = (char) getc(stream)) != EOF && inp[i] != '\n')
        i++;

    inp[i] = '\n';
    inp[i + 1] = '\0';

    inpLen = (size_t) i + 1;

    if(*lineptr == NULL && *n == 0)
        *lineptr = (char *)malloc((inpLen + 1) * sizeof(char));

    if(inpLen + 1 > *n) {
        *lineptr = (char *)realloc(*lineptr, (inpLen + 1) * sizeof(char));
        *n = inpLen + 1;
    }

    strcpy(*lineptr, inp);

    if(ferror(stream) || (feof(stream) && i == 0))
        return -1;

    return i + 1;
}

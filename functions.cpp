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

size_t customStrlen(const char *s) {
    assert(s);

    size_t i = 0;

    while(s[i] != '\0')
        i++;

    return i;
}

char *customStrcpy(char *s, const char *t) {
    assert(s && t);
    assert(strlen(s) >= strlen(t));

    int i = 0;

    while((s[i] = t[i]) != '\0')
        i++;

    s[i] = '\0';

    return s;
}

char *customStrncpy(char *dest, const char *source, size_t count) {
    assert(dest && source);

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

/* char *customFgets(char *s, int n, FILE *stream) {
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

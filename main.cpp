#include "functions.h"

int main() {
    customPuts("aboba");

    char *buffer = NULL,
         s[MAXLINE] = "ZVZVZVZV",
         t[MAXLINE] = "Meine ehre heist treue",
         *w = NULL;
    int bufsize = 0,
        numinput = 0;
    FILE *fp = NULL;

    printf("%c\n", *customStrchr(s, 'V'));
    printf("%d\n", customStrchr(s, 'z') == NULL);

    printf("%d\n", customStrlen("ass"));

    customStrcpy(s, t);
    printf("%s\n", s);

    customStrncpy(s, "aboba", 3);
    printf("%s\n", s);

    customStrcat(s, t);
    printf("%s\n", s);

    fp = fopen("Y:\\gthb\\Functions\\file.txt", "r");
    customFgets(s, 7, fp);
    printf("%s\n", s);

    w = customStrdup(s);
    printf("%s\n", w);

    bufsize = 64;
    buffer = (char *)malloc(bufsize * sizeof(char));
    numinput = customGetline(&buffer, &bufsize, stdin);
    printf("%d chars: %s\n", numinput, buffer);

    fclose(fp);
    getchar();

    return 0;
}

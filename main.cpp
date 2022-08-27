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

    printf("strchr\n");
    printf("%c\n", *customStrchr(s, 'V'));
    printf("%d\n", customStrchr(s, 'z') == NULL);

    printf("\nstrlen\n");
    printf("%d\n", customStrlen("ass"));

    printf("\nstrcpy\n");
    customStrcpy(s, t);
    printf("%s\n", s);

    printf("\nstrncpy\n");
    customStrncpy(s, "aboba", 3);
    printf("%s\n", s);

    printf("\nstrcat\n");
    customStrcat(s, t);
    printf("%s\n", s);

    printf("\nfgets\n");
    fp = fopen("Y:\\gthb\\Functions\\file.txt", "r");
    customFgets(s, 7, fp);
    printf("%s\n", s);

    printf("\nstrdup\n");
    w = customStrdup(s);
    printf("%s\n", w);

    printf("\ngetline\n");
    bufsize = 64;
    buffer = (char *)malloc(bufsize * sizeof(char));
    numinput = customGetline(&buffer, &bufsize, fp);
    printf("%d chars: %s\n", numinput, buffer);

    fclose(fp);
    getchar();

    return 0;
}

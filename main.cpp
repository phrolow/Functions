#include "functions.h"

int main() {
    char s[] = "bebebe";

    printf("puts\n");
    printf("%c", customPuts("aboba"));
    customPuts("ass");

    printf("\nstrchr\n");
    printf("%c\n", *customStrchr("ZVZVZV", 'V'));
    printf("%d\n", customStrchr("ZV", 'z') == NULL);
    printf("%c\n", *(customStrchr("PIZDA", 'Z') + 1));

    printf("\nstrlen\n");
    printf("%d\n", customStrlen("ass"));

    printf("\nstrcpy\n");
    customStrcpy(s, "bababa");
    printf("%s\n", s);

    printf("\nstrncpy\n");
    customStrncpy(s, "aboba", 3);
    printf("%s\n", s);
    customStrncpy(s, "Z", 4);
    printf("%s\n", s);
    customStrncpy(s, "Meine ehre heist treue", 47);
    printf("%s\n", s);

    printf("\nstrcat\n");
    customStrcat(s, "pizda");
    printf("%s\n", s);

/*  printf("\nfgets\n");
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

    fclose(fp); */

    getchar();

    return 0;
}

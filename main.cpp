#include "functions.h"

int main() {
    customPuts("aboba");

    char s[MAXLINE] = "ZVZVZVZV",
         t[MAXLINE] = "Meine ehre heist treue";

    printf("%c\n", *customStrchr(s, 'V'));
    printf("%d\n", customStrchr(s, 'z') == NULL);

    printf("%d\n", customStrlen("ass"));

    customStrcpy(s, t);
    printf("%s\n", s);

    customStrncpy(s, "aboba", 3);
    printf("%s\n", s);

    getchar();

    return 0;
}

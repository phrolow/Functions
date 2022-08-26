#include "functions.h"

int main() {
    puts("aboba");

    char* s = "ZVZVZVZV";
    printf("%c\n", *customStrchr(s, 'V'));
    printf("%d\n", customStrchr(s, 'z') == NULL);

    printf("%d\n", customStrlen("ass"));

    getchar();

    return 0;
}

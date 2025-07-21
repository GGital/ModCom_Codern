#include <ctype.h>
#include <stdio.h>

int main() {
    char s[101];
    char c;
    int count = 0;

    scanf("%s %c", s, &c);

    for (int i = 0; s[i] != '\0'; i++) {
        if (tolower(s[i]) == tolower(c)) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
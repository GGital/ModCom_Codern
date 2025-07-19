#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char company[101];
    int count = 0;

    fgets(company, sizeof(company), stdin);
    
    for (int i = 0; company[i] != '\0'; i++) {
        char c = tolower(company[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

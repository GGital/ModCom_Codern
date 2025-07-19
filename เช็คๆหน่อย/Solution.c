#include <stdio.h>
#include <string.h>

int main() {
    char company_name[1000];
    int length = 0;

    fgets(company_name, sizeof(company_name), stdin);

    for (int i = 0; i < strlen(company_name); i++) {
        if (company_name[i] != ' ' && company_name[i] != '\n') {
            length++;
        }
    }

    printf("%d\n", length);

    return 0;
}

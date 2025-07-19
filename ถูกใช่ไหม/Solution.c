#include <stdio.h>
#include <string.h>

int main() {
    char company_name[1000];
    char target[] = "CPE Express";
    int match = 1;

    fgets(company_name, sizeof(company_name), stdin);

    if (company_name[strlen(company_name) - 1] == '\n') {
        company_name[strlen(company_name) - 1] = '\0';
    }
    
    for (int i = 0; i < strlen(target); i++) {
        if (company_name[i] != target[i]) {
            match = 0;
            break;
        }
    }

    if (match) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

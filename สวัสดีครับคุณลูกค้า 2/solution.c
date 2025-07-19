#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    char name[100];
    for(int i = 0; i<n; i++){
        scanf("%s", name);
        printf("Hello %s! What can I do for you?\n", name);
    }

    return 0;
}
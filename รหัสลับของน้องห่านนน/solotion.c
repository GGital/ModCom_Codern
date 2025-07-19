#include <stdio.h>

int main() {
    int code;      
    char character; 

    scanf("%d", &code);

    character = (char)code;

    printf("%c\n", character);

    return 0;
}

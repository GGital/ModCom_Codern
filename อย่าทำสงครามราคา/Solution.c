#include <stdio.h>

int main() {
    int distance;
    scanf("%d", &distance);

    if (distance <= 10){
        printf("30\n");
    }
    else if (distance <= 50){
        printf("50\n");
    }
    else{
        printf("100\n");
    }

    return 0;
}

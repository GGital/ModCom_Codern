#include <stdio.h>

int main() {
    int isNewMember, distance, cost = 60;
    scanf("%d", &isNewMember);
    scanf("%d", &distance);

    if (isNewMember == 1 && distance <= 10)
        cost = 0;
    else if (isNewMember == 0 && distance <= 5)
        cost = 30;

    printf("%d\n", cost);
    return 0;
}

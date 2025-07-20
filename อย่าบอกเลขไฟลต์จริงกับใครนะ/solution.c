#include <stdio.h>

int main() {
    char flight[7];
    int num;

    scanf("%s %d", flight, &num);
    for (int i = 0; flight[i] != '\0'; i++) {
        flight[i] += num;
    }
    printf("%s", flight);
    return 0;
}
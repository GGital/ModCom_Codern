#include <stdio.h>

int main() {
    int rounds;
    int total_points = 0;

    scanf("%d", &rounds);

    for (int i = 1; i <= rounds; i++) {
        total_points += i * 10;  
    }

    printf("%d\n", total_points);

    return 0;
}

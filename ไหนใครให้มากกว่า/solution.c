#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char names[10][101];
    int points[10];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", names[i], &points[i]);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (points[i] > points[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Winner is %s", names[maxIndex]);

    return 0;
}

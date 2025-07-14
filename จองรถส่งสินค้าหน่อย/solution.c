#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int days[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &days[i]);
    }

    int van[3] = {0, 0, 0};
    char result[N];

    for (int i = 0; i < N; i++) {
        int t = days[i];
        int minIndex = 0;

        for (int j = 1; j < 3; j++) {
            if (van[j] < van[minIndex]) {
                minIndex = j;
            }
        }
        result[i] = 'A' + minIndex;
        van[minIndex] += t;
    }

    for (int i = 0; i < N; i++) {
        printf("%c\n", result[i]);
    }
    return 0;
}

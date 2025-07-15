#include <stdio.h>
#include <limits.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[N];
    int removed[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        removed[i] = 0;
    }

    while (1) {
        int minVal = INT_MAX;
        int minIdx = -1;

        for (int i = 0; i < N; i++) {
            if (!removed[i] && arr[i] < 0) {
                if (arr[i] < minVal) {
                    minVal = arr[i];
                    minIdx = i;
                }
            }
        }

        if (minIdx == -1) break;

        int left = (minIdx - K < 0) ? 0 : minIdx - K;
        int right = (minIdx + K >= N) ? N - 1 : minIdx + K;
        for (int i = left; i <= right; i++) {
            removed[i] = 1;
        }
    }

    for (int i = 0; i < N; i++) {
        if (removed[i]) {
            printf("X");
        } else {
            printf("%d", arr[i]);
        }
        if (i != N - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
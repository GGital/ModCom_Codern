#include <stdio.h>

#define MAX 100

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int grid[MAX][MAX];
    unsigned long long dp[MAX][MAX] = {0};

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &grid[i][j]);

    if (grid[0][0] == 1) {
        printf("0\n");
        return 0;
    }

    dp[0][0] = 1;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 1) {
                dp[i][j] = 0; 
                continue;
            }
            if (i > 0) dp[i][j] += dp[i-1][j];
            if (j > 0) dp[i][j] += dp[i][j-1];
        }
    }

    printf("%llu\n", dp[M-1][N-1]);

    return 0;
}

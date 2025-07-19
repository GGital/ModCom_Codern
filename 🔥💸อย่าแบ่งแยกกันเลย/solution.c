#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    float arr[n][1];
    for (int i = 0; i < n; i++) {
        float sum = 0.0, weight;
        for (int j = 1; j <= m; j++) {
            scanf("%f", &weight);
            sum += weight;
        }
        arr[i][0] = sum;
    }

    for (int i = 0; i < n; i++){
        printf("%d %.2f\n",i+1,arr[i][0]);
    }
    
    return 0;
}
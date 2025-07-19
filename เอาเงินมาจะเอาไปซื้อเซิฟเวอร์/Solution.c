#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int ratings[100];
    float avg;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ratings[i]);
        sum += ratings[i];
    }

    avg = (float)sum / n;

    printf("%d\n", sum);
    printf("%.2f\n", avg);

    return 0;
}

#include <math.h>
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", (int)(ceil((float)a / b)));

    return 0;
}
#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    
    int plank = 2 * M + 1 * N;
    int stick = 6 * M + 4 * N;
    printf("%d %d\n", plank, stick);
    return 0;
}
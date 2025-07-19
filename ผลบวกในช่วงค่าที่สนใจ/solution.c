#include <stdio.h>

int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    int sum = 0, found = 0;

    for (int i = 0; i < 8; i++) {
        int n;
        scanf("%d", &n);
        if (n >= x && n <= y) {
            sum += n;
            found = 1;
        }
    }

    if (found) {
        printf("%d\n", sum);
    } 
    else {
        printf("None\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int boxes, commission = 0;
    scanf("%d", &boxes);

    if (boxes >= 1 && boxes <= 20)
        commission = boxes * 5;
    else if (boxes <= 50)
        commission = boxes * 7;
    else if (boxes > 50)
        commission = boxes * 10;

    printf("%d\n", commission);
    return 0;
}

#include <stdio.h>

int main() {
    int distance, cost = 0;
    float weight;

    scanf("%d", &distance);
    scanf("%f", &weight);

    if (distance <= 10)
        cost += 30;
    else if (distance <= 50)
        cost += 50;
    else
        cost += 100;

    if (weight <= 1.0)
        cost += 0;
    else if (weight <= 5.0)
        cost += 20;
    else
        cost += 50;

    printf("%d\n", cost);
    return 0;
}

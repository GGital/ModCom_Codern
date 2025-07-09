#include <stdio.h>

int main() {
    float fuel, km_per_liter, distance;

    scanf("%f", &fuel);
    scanf("%f", &km_per_liter);

    distance = fuel * km_per_liter;

    printf("%.2f\n", distance);
    return 0;
}

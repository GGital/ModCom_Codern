#include <stdio.h>

int main() {
    float r; 
    float pi = 3.14;
    float circumference;

    scanf("%f", &r);

    circumference = 2 * pi * r;

    printf("%.2f\n", circumference);

    return 0;
}

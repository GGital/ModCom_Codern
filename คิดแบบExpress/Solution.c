#include <stdio.h>

float calculateFee(float weight) {
    float rate;

    if (weight > 0 && weight <= 5) {
        rate = 20.0;
    } else if (weight > 5 && weight <= 20) {
        rate = 15.0;
    } else if (weight > 20) {
        rate = 10.0;
    } else {
        return 0.0;
    }

    return weight * rate;
}

int main() {
    float weight, fee;

    printf("Enter package weight (kg): ");
    scanf("%f", &weight);

    fee = calculateFee(weight);

    printf("Shipping fee: %.2f\n", fee);

    return 0;
}

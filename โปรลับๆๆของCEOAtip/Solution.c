#include <stdio.h>

int main() {
    int parcels;
    float price_per_parcel = 50.0;
    float total_price, final_price;

    scanf("%d", &parcels);

    total_price = parcels * price_per_parcel;

    if (parcels > 5) {
        final_price = total_price - (total_price * 0.10);  // ลด 10%
    } else {
        final_price = total_price;
    }

    printf("%.2f\n", final_price);

    return 0;
}

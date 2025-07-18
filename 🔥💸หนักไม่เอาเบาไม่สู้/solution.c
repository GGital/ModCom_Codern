#include <stdio.h>

int main(){
    float weight_limit;
    float w;
    float result[100000];
    int amount = 0;

    scanf("%f",&weight_limit);
    scanf("%f",&w);
    while (w != -1){
        if (w > weight_limit){
            result[amount] = w;
            amount++;
        }
        scanf("%f",&w);
    }

    for (int i = 0; i < amount; i++){
        printf("%.2f\n",result[i]);
    }
    printf("%d",amount);
    
    return 0;
}
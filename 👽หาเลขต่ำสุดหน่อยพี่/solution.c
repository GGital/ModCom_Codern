#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; ++i){
        int num = arr[i];
        int min = 9;
        if(num == 0){
            min = 0;
        }
        while(num > 0){
            int digit = num % 10;
            if(digit < min){
                min = digit;
            }
            num /= 10;
        }
        
        printf("%d\n", min);
    }

    return 0;
}

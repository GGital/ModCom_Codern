#include <stdio.h>

int main(){
    int n;
    int m;
    int refills = 0;
    int current_fuel = 0;

    scanf("%d %d",&m,&n);
    for (int i = 0; i < n; i++){
        int T;
        scanf("%d",&T);
        if (current_fuel < T){
            refills++;
            current_fuel = m;
        }
        current_fuel -= T;
    }

    printf("%d",refills);

    return 0;
}
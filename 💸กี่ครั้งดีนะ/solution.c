#include <stdio.h>

int main(){
    int n,m,refills = 0,current_fuel = 0;
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
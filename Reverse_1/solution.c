#include<stdio.h>

int my_pow(int base,int power){
    int ans = 1;
    for(int i=0;i<power;i++){
        ans*=base;
    }
    return ans;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",my_pow(n,m));
}
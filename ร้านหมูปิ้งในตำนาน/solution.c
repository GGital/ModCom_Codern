#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    int cnt=0;
    while(1){
        if(ans%3 == 1){
            cnt++;
        }
        if(cnt==n){
            break;;
        }
        ans+=5;
    }
    printf("%d",ans);
}
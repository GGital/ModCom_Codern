#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",str);
    int n;
    scanf("%d",&n);
    for(int i=0; i<strlen(str);i++){
        char base;
        if(str[i]>=65 && str[i]<=90){
            base = 'A';
        }
        else if(str[i]>=97 && str[i]<= 122){
            base = 'a';
        }
        else{
            continue;
        }
        str[i] =  ((str[i]-base + n) % 26) + base; 
    }
    printf("%s", str);
}
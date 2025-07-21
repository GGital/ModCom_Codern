#include <stdio.h>

int main(){
    char string[100000];
    
    scanf("%s",string);
    if (string[0] != 'M'){
        printf("NO");
        return 0;
    }else if (string[1] != 'C'){
        printf("NO");
        return 0;
    }else if (string[2] != 'E'){
        printf("NO");
        return 0;
    }else if (string[3] != 'P'){
        printf("NO");
        return 0;
    }
    printf("YES");
    
    return 0;
}
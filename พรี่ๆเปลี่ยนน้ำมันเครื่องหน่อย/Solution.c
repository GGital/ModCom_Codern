#include <stdio.h>

int main() {
    int plate;
    scanf("%d", &plate);
    if (plate % 2 == 0){
        printf("No maintenance needed\n");
    }
    else{
        printf("Needs maintenance\n");
    }
        
    return 0;
}

#include <stdio.h>

int main(){
    int dis;
    float speed,alltime;
    scanf("%f",&speed);
    speed = speed*3.6;
    scanf("%d",&dis);
    while (dis != -1){
        alltime += (dis/speed);
        scanf("%d",&dis);
    }
    
    printf("%.2f",alltime);

    return 0;
}
#include <stdio.h>

int main(){
    int dis;
    float speed;
    float alltime;

    scanf("%f",&speed);
    scanf("%d",&dis);
    speed = speed*3.6;
    while (dis != -1){
        alltime += (dis/speed);
        scanf("%d",&dis);
    }
    
    printf("%.2f",alltime);

    return 0;
}
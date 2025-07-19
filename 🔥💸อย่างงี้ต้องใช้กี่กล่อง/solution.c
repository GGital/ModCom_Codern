#include <stdio.h>


int main(){
    int n,maxbox,boxcount = 0;
    float boxcap;
    scanf("%d %d %f",&maxbox ,&n,&boxcap);
    float item[n];
    float box[maxbox];
    for (int i = 0; i < maxbox; i++) {
        box[i] = 0;
    }

    for (int i = 0; i < n; i++){
        scanf("%f",&item[i]);   
    }

    for (int i = 0; i < n; i++){
        int isPlace = 0;
        for (int j = 0; j < boxcount; j++){
            if (box[j] + item[i] <= boxcap){
                box[j] += item[i];
                isPlace = 1;
                break;
            }
            
        }
        if (!isPlace){
            box[boxcount] = item[i];
            boxcount++;
        }
    }

    if (boxcount > maxbox){
        printf("CAN NOT CONTAIN");
    }else{
        printf("%d",boxcount);
    }
    
    
    return 0;
}
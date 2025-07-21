#include<stdio.h>
int mx(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int map[n][m];
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            scanf("%d",&map[row][col]);
        }
    }


    int score[n][m][k+1];
    
    for (int row = 0; row < n; row++){
        for (int col = 0; col < m; col++){
            for (int usedK = 0; usedK <= k; usedK++){
                score[row][col][usedK] = 0;
            }
        }
    }
    
    for(int row=0;row<n;row++){
        score[row][0][0]=map[row][0];
    }
    
    for(int col=1;col<m;col++){
        for(int row=0;row<n;row++){
            for(int usedK=0;usedK<=k;usedK++){
                //ทางตรง
                score[row][col][usedK] = mx(score[row][col-1][usedK]+map[row][col],score[row][col][usedK]);
                //เฉียงบน
                if(row > 0 && usedK>0){
                    score[row][col][usedK] = mx(score[row-1][col-1][usedK-1]+map[row][col],score[row][col][usedK]);
                }
                //เฉียงล่าง
                if(row<n-1 && usedK>0){
                    score[row][col][usedK] = mx(score[row+1][col-1][usedK-1]+map[row][col],score[row][col][usedK]); 
                }
            }
        }
    }
    int ans=0;
    for(int row=0;row<n;row++){
        for(int usedK=0;usedK<=k;usedK++){
            if(score[row][m-1][usedK] > ans){
                ans = score[row][m-1][usedK];
            }
        }
    }
    printf("%d",ans);
}
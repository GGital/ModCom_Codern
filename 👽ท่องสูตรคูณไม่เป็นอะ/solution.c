#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;++i){
        int x;
        scanf("%d",&x);
        for(int j=1;j<=n;++j){
            printf("%d ",x*j);
        }
        printf("\n");
    }
    return 0;
}
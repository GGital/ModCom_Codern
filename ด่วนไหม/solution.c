#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 4)
    {
        printf("ASAP");
    }
    else if (n >= 5 && n <= 9)
    {
        printf("Soon");
    }
    else if (n >= 10)
    {
        printf("Later");
    }
    return 0;
}
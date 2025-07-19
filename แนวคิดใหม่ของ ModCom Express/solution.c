#include <stdio.h>

int main()
{
    int n, m, l, r;
    scanf("%d %d %d %d", &n, &m, &l, &r);
    int dif = n - m;
    while (r > 0 && dif > 0)
    {
        r -= 1;
        dif -= 1;
    }
    while (l < 0 && dif > 0)
    {
        l += 1;
        dif -= 1;
    }
    printf("%d %d\n", l, r);
    return 0;
}
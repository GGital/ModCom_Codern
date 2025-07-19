#include <stdio.h>
typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    int b[n + 1];
    for (int i = 0; i <= n; i++)
        b[i] = 0;
    for (int i = 1; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        b[x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}

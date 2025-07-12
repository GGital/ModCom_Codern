#include <stdio.h>
typedef long long ll;
#define MAXN 1000005
ll dp[1000005];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        dp[i] = MAXN;
    dp[n] = 0;
    for (int i = n; i > 0; i--)
    {
        int num = i;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 0)
            {
                dp[i - digit] = (dp[i - digit] < dp[i] + 1) ? dp[i - digit] : dp[i] + 1;
            }
            num /= 10;
        }
    }
    printf("%lld\n", dp[0]);
    return 0;
}
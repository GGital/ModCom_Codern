#include <stdio.h>
#include <string.h>

int main()
{
    char p[200005];
    char s[200005];

    scanf("%s", p);
    scanf("%s", s);
    int l = 0;
    int r = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] == 'L')
        {
            while (s[l] == 'R')
                l++;
            if (s[r] == 'L')
            {
                r++;
                if (s[r] == 'L')
                {
                    r++;
                }
            }
        }
        else
        {
            while (s[l] == 'L')
                l++;
            if (s[r] == 'R')
            {
                r++;
                if (s[r] == 'R')
                {
                    r++;
                }
            }
        }
        l++;
        if (l > r)
            break;
    }
    // printf("%d %d\n", l, r);
    if (r >= strlen(s) && l <= r)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
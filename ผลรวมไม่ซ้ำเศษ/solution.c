#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[k];
    for (int i = 0; i < k; i++)
    {
        arr2[i] = -99999;
    }
    for (int i = 0; i < n; i++)
    {
        int mod = arr[i] % k;
        arr2[mod] = arr2[mod] > arr[i] ? arr2[mod] : arr[i];
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr2[i];
        // printf("%d ", arr2[i]);
    }
    printf("%d", sum);
    return 0;
}
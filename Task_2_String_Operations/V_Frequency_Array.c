#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int count[y];
    for (int i = 0; i < y; i++)
    {
        count[i] = 0;
    }

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        // printf("%d ", arr[i]);
        int val = arr[i] - 1;
        count[val]++;
    }
    for (int i = 0; i < y; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}
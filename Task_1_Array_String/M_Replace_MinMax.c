#include <stdio.h>
#include <limits.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    int max = INT_MIN;
    int maxPos = 0;
    int min = INT_MAX;
    int minPos = 0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minPos = i;
        }
    }
    arr[maxPos] = min;
    arr[minPos] = max;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
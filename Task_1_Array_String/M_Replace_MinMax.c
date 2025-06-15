#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[x]);
        // printf("%d ", arr[x]);
    }
  
    printf("%d ", arr[1]);

    return 0;
}
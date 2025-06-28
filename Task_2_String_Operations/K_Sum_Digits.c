#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    char arr[x];
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        scanf(" %c", &arr[i]);
        count = (count + arr[i]) - 48;
    }
    printf("%d", count);
    return 0;
}
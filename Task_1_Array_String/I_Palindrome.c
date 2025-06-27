#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    char b[1001];
    int flag = 1;
    int j = 0;
    scanf("%s", &a);
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    for (int i = 0; i < strlen(a); i++)
    {
        if (b[i] != a[i])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    // fgets(a, 1000, stdin);
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 44)
        {
            a[i] = 32;
        }
        else if (a[i] >= 65 && a[i] < 97)
        {
            a[i] = a[i] + 32;
        }
        else
        {
            a[i] = a[i] - 32;
        }
    }
    printf("%s", a);

    return 0;
}
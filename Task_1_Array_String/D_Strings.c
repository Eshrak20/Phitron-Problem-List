#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    char b[1001];
    char temp[1001];
    scanf("%s", &a);
    scanf("%s", &b);
    printf("%d", strlen(a));
    printf(" ");
    printf("%d\n", strlen(b));
    printf("%s", a);
    printf("%s\n", b);

    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];

    printf("%s", a);
    printf(" ");
    printf("%s\n", b);

    return 0;
}
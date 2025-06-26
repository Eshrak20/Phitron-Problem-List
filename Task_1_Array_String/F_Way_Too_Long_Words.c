#include <stdio.h>
int main()
{
    int x;
    char st[10000000];
    scanf("%d", &x);
    getchar();

    for (int i = 0; i < x; i++)
    {
        fgets(st, sizeof(st), stdin);

        if (strlen(st) - 1 > 10)
        {
            printf("%c", st[0]);
            printf("%d", strlen(st) - 3);
            printf("%c\n", st[strlen(st) - 2]);
        }
        else{
            printf("%s",st);
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    char Eshrak[1000];
    fgets(Eshrak, sizeof(Eshrak), stdin);
    printf("%s",Eshrak);
    
     // char fardin[100];
    // scanf("%s",&fardin);
    // printf("%s",fardin);

    return 0;
}
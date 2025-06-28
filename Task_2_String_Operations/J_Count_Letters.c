#include <stdio.h>
#include <string.h>
int main()
{

    char x[100007];
    scanf("%s", x);
    int sz = strlen(x);
    int count[26] = {0};

    for (int i = 0; i < sz; i++)
    {
        int val = x[i] - 97;
        count[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }

    return 0;
}

 

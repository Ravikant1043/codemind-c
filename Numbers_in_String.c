#include <stdio.h>
int main()
{
    int i,t=0;
    char s[30];
    scanf("%[^
]s", s);
    for (i = 0; s[i] != NULL; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            t+=(s[i] -48);
    }
    printf("%d", t);
    return 0;
}
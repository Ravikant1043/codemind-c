#include<stdio.h>
int main()
{
    int i,x=0,y=0;
    char s[20];
    scanf("%[^
]s",s);
    for (i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='z')
        x++;
        else if (s[i]=='o')
        y++;
    }
    if (2*x==y)
    printf("Yes");
    else
    printf("No");
    return 0;
}
#include<stdio.h>
int main()
{
    int i;
    char s[30],t[30];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(65<=s[i]&&s[i]<=90)
        {t[i]=s[i]+32;
            printf("%c",t[i]);}
        else
        printf("%c",s[i]);
    }
    return 0;
}
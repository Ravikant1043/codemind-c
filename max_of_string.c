#include<stdio.h>
int main()
{
    int i=0;
    char s[20],k;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>k)
        k=s[i];
    }
    printf("%c",k);
    return 0;
}
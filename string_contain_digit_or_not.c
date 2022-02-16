#include<stdio.h>
int main()
{
    int i=0,k=0;
    char s[30];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        k++;
    }
    if(k>0)
    printf("Contains %d digit",k);
    else
    printf("Doesn't contain digit");
    return 0;
}
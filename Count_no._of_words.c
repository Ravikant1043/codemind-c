#include<stdio.h>
int main()
{
    int i,k=1;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        k++;
    }
    printf("%d",k);
    return 0;
}
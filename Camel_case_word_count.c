#include<stdio.h>
int main()
{
    char x[100];
    int c=0,i;
    scanf("%s",x);
    for(i=1;x[i]!=NULL;i++)
    {
        if(x[i]>=65 && x[i]<=90)
          c++;
    }
    printf("%d",c+1);
    return 0;
}
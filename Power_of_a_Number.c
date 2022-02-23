#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,t;
    scanf("%d%d%d",&x,&y,&m);
    t=pow(x,y);
    printf("%d",t%m);
    return 0;
}
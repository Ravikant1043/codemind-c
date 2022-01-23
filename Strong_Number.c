#include<stdio.h>
int fac(int a)
{
    if(a==0)
    return 1;
    else
    return a*fac(a-1);
}
int main()
{
    int a,i,j=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        i=a%10;
        j+=fac(i);
        a/=10;
    }
    if(t==j)
    printf("The number %d is a strong number",t);
    else
    printf("The number %d is not a strong number",t);
    return 0;
}
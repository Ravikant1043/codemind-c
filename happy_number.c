#include<stdio.h>
#include<math.h>
void happy(int n)
{
    int i,d=0;
    if((n==7) || (n==1))
    {
        printf("True");
        return ;
    }    
    // if(n==4||n==5||n==2||n==3||n==6||n==8||n==9)
    if(n==4)
    {
        printf("False");
        return ;
    }
    while(n)
    {
        d+=pow(n%10,2);
        n/=10;
    }
    happy(d);
}
int main()
{
    int n;
    scanf("%d",&n);
    happy(n);
}
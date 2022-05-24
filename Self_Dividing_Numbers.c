#include<stdio.h>
int self(int n)
{
    int i,j;
    j=n;
    while(j){
        i=j%10;
        if(i==0) 
        return 0;
        if(n%i!=0)
        return 0;
        j=j/10;
    }
    return 1;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(self(i)==1)
        printf("%d ",i);
    }
    return 0;
}
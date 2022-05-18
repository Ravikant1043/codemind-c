#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    // c=p*pow((1+r*0.01),t);
    printf("%.2f",p*pow((1+r*0.01),t));
    return 0;
}
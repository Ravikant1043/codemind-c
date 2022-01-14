#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[20];
    gets(s);
    t=strlen(s);
    if(t==10)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}
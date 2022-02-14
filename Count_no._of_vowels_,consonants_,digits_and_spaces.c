#include<stdio.h>
#include<string.h>
int main()
{
    int i,v=0,c=0,d=0,sp=0;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        sp++;
        else if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        v++;
        else if(48<=s[i]&&s[i]<=57)
        d++;
        else
        c++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,sp);
    return 0;
}
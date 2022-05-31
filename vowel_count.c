#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,c=0;
    char str[100];
    scanf("%[^
]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
        }
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            c++;
        }
    }
    printf("%d",c);
}
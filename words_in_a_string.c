#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l,i,c=0;
    scanf("%[^
]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}
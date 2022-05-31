#include<stdio.h>
int main()
{
    int n,a[100],i,b=-1,c=-1,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            b=i;
            break;
        }
    }
     for(i=n-1;i>=0;i--)
    {
        if(k==a[i])
        {
            c=i;
            break;
        }
    }
    printf("%d %d",b,c);
}
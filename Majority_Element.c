#include<stdio.h>
int main()
{
    int n,a[1000],c=0,maxc=0,i,j,maxe;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c++;
                if(c>maxc)
                {
                    maxe=a[j];
                    maxc=c;
                }
            }
        }
    }
    printf("%d",maxe);
}
#include<stdio.h>
int fun(int d,int *a,int i)
{
    int j;
    for(j=0;j<i;j++)
    {
        if(a[j]==d)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,t,a[100],c,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        c=-1;
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(fun(a[j]+a[k],a,n))
                {
                    c++;
                }
            }
        }
        if(c!=-1)
        {
            c++;
        }
        printf("%d
",c);
    }
}
#include<stdio.h>
int main()
{
    int n,arr[100][10],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d
",sum);
    }
}
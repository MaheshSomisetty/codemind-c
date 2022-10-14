#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int a[100],n,k,j;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        j=0;
        for(k=0;k<n;k++)
        {
            j+=(a[k]%2);
        }
        printf("%d
",j/2);
    }
}
#include<stdio.h>
void fun(int *a,int n)
{
    int i,c=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=c;
}
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        fun(a,n);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
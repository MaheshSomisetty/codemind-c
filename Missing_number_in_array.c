#include<stdio.h>
int main()
{
    int t,n,s,i;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        int a[n];
        s=0;
        for(i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        printf("%d
",(n*(n+1)/2)-s);
        t--;
    }
}
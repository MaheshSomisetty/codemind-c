#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,m;
        scanf("%ld %ld",&n,&m);
        if(n==1)
        {
            if(m%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else if(m%2==1)
        {
            if(n%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else 
        {
            printf("Impossible
");
        }
    }
}
#include<stdio.h>
int pretty(int n)
{
    int d;
    while(n)
    {
        d=n%10;
        if(d==2 || d==3 || d==9)
        {
            return 1;
        }
        break;
    }
    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,n,j,c=0;
        scanf("%d%d",&m,&n);
        for(j=m;j<=n;j++)
        {
            if(pretty(j))
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}
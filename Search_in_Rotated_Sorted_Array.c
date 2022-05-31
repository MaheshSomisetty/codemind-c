#include<stdio.h>
int main()
{
	int a[100],i,k,n,c=0;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c++;
			break;
		}
	}
	if(c==1)
	{
		printf("%d",i);
	}
	else
	{
		printf("-1");
	}
	return 0;
}
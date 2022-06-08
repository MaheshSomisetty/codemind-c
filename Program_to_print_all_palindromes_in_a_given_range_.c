#include<stdio.h>
int main()
{
    int num,rem,reversenum,temp,start,end;
    scanf("%d",&start);
    scanf("%d",&end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        reversenum=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            reversenum=reversenum*10+rem;
        }
        if(num==reversenum)
        {
            printf("%d ",num);
        }
    }
    return 0;
}
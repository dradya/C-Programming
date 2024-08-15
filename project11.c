//program to find sum of digits of a number
#include<stdio.h>
void main()
{
    int n,r,sum=0,num;
    printf("\nEnter n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("\nsum of digits of %d is %d",n,sum);
}
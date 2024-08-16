//program to find sum of digits of a number and the reverse of the number using while
#include<stdio.h>
void main()
{
    int n,r,sum=0,rev=0;
    printf("\nEnter n=");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        sum=sum+r;
        n=n/10;
    }
    printf("\nsum=%d",sum);
    printf("\nrev=%d",rev);
}
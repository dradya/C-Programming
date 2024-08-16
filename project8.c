//program to find sum of first n natural numbers using while
#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("Enter n=");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\n sum=%d",sum);
}

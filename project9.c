//program to display sum of squares of first n numbers using while
#include<stdio.h>
void main()
{
    int i,sum,n;
    printf("Enter n=");
    scanf("%d",&n);
    i=0;
    sum=0;
    while(i<=n)
    {
    sum=sum+(i*i);
    i++;
    }  
    printf("sum=%d",sum);
}
//program to find product of first n natural numbers using while
#include<stdio.h>
void main()
{
    int i,n,fact;
    printf("Enter n=");
    scanf("%d",&n);
    i=1;
    fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
}

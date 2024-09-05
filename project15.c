//program to generate a fibonacci series 
#include<stdio.h>
void main()
{
    int n,fib1=0,fib2=1,fib3,i;
    printf("enter n=");
    scanf("%d",&n);
    printf("\n%d\t%d",fib1,fib2);
    for(i=3;i<=n;i++);
    {   
        fib3=fib1+fib2;
        printf("\t%d",fib3);
        fib1=fib2;
        fib2=fib3;
    }
}
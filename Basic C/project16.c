//program to check if a number is prime or not
#include<stdio.h>
void main()
{
    int i,n,prime=0;
    printf("Enter n=");
    scanf("%d",&n);
    if(n==0 || n==1)
        prime=1;
    else
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                //print("%d",i);
                prime=1;
                break;
            }
        }
    }
    if(prime==1)
    printf("Not PRIME");
    else
    printf("PRIME");
}
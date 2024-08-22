//program to find factorial of a number using for loop
#include<stdio.h>
void main()
{
    int i,a,fact=1;
    printf("Enter a=");
    scanf("\n%d",&a);
    for(i=1;i<=a;i++)
    {   
        fact=fact*i;  
    } 
    printf("\n fact=%d",fact);
}
//program to find if a number is positive or negative
#include<stdio.h>
void main()
{
    int a;
    printf("enter a number=");
    scanf("%d",&a);
    if(a>=0)
        printf("\n%d is positive",a);
    else
        printf("\n%d is negative",a);
    
    if(a%2==0)
        printf("\n%d is even",a);
    else
        printf("\n%d is odd",a);
    if(a==0)
        printf("\n%d is zero");
}
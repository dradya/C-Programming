//program to display 1st n natural numbers using while
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter a number=");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
}

//program to calculate square, cube, square root and X^x using switch
#include<stdio.h>
#include<math.h>
void main()
{
    int x,op,a;
    printf("enter an Integer x=");
    scanf("%d",&x);
    printf("\nenter an option=");
    printf("\n1:SQUARE \n2:CUBE \n3:SQUARE ROOT \n4:x^x \n=");
    scanf("%d",&op);
    switch(op)
    {
        case 1: a=x*x;
        printf("Square=%d",a);
        break;
        case 2: a=x*x*x;
        printf("Cube=%d",a);
        break;
        case 3: a=sqrt(x);
        printf("Square Root=%d",a);
        break;
        case 4: a=pow(x,x);
        printf("x^x=%d",a);
        break;
        default:printf("wrong number");
    }
}
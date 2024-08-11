//program to implement calculation using switch
#include<stdio.h>
void main()
{
    int a,b,c,op;
    printf("Enter two integers=\n");
    scanf("%d%d",&a,&b); 
    printf("\nEnter an OPERATOR");
    printf("\n1:ADD \n2:SUB \n3:MUL \n4:DIV \n=");
    scanf("%d",&op);
    switch(op)
    {
        case 1: c=a+b;
        printf("ADD=%d",c);
        break;
        case 2: c=a-b;
        printf("SUB=%d",c);
        break;
        case 3: c=a*b;
        printf("MUL=%d",c);
        break;
        case 4: c=a/b;
        printf("DIV=%d",c);
        break;
        default:printf("wrong number");
    }
}

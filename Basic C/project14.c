//program to calculate x to the power y
#include<stdio.h>
void main()
{
    int x,y,i,j,power=1;
    printf("Enter x and y=\n");
    scanf("%d %d",&x,&y);
    if(y==0)
    printf("\nx to the power y=1");
    else
    {
        for(i=1;i<=y;i++)
        power=power*x;
    }
    printf("\nx to the power y=%d",power);
}
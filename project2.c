//program to display smallest of four numbers
#include<stdio.h>
main()
{
int f,g,h,i;
printf("enter four numbers=\n");
scanf("%d%d%d%d",&f,&g,&h,&i);
if ((f<g)&&(f<h)&&(f<i))
printf("\n %d is smallest",f);
else if ((g<f)&&(g<h)&&(g<i))
printf("\n %d is smallest",g);
else if ((h<f)&&(h<g)&&(h<i))
printf("\n %d is smallest",h);
else
printf("\n %d is smallest",i);
}
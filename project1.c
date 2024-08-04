#include<stdio.h>
main()
{
int c,d,e;
printf("\n enter three numbers=");
scanf("%d %d %d", &c, &d, &e);
if(c>d)
{
if(c>e)
printf("\n %d is greatest",c);
else
printf("\n %d is greatest",e);
}
else
{
if(d>e)
printf("%d is greatest",d);
else
printf("\n %d is greatest",e);
}
}

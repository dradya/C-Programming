//program to use various operatorn in c
#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v;

printf("\nenter the value a=");
scanf("%d",&a);
printf("enter the value b=");
scanf("%d",&b);
printf("ARITHMETIC OPERATORS");
c=a+b;
printf("\n %d=c",c);
d=a-b;
printf("\n %d=d",d);
e=a*b;
printf("\n %d=e",e);
f=a/b;
printf("\n %d=f",f);

printf("\nRELATIONAL OPERATORS");
g=(a>b);
printf("\n %d=g",g);
h=(a<b);
printf("\n %d=h",h);
i=(a==b);
printf("\n %d=i",i);
j=(a!=b);
printf("\n %d=j",j);
k=(a<=b);
printf("\n %d=k",k);
l=(a>=b);
printf("\n %d=l",l);

printf("\nLOGICAL OPERATORS");
m=(a>b)&& (a>b);
printf("\n %d=m",m);
n=(a<b) || (a!=b);
printf("\n %d=n",n);
o=! (a<b);
printf("\n %d=o",o);

printf("\nBitwise Operators");
p=a&b;
printf("\n %d=p",p);
q=a|b;
printf("\n %d=q",q);
r=a^b;
printf("\n %d=r",r);
s=a>>b;
printf("\n %d=s",s);
t=a<<b;
printf("\n %d=t",t);
u=~a;
printf("\n %d=u",u);
v=~b;
printf("\n %d=v",v);
}
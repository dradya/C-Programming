#include<stdio.h>
void main()
{
    int a,b,c,d,k,l,e,f,g,h,i,j,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B;
printf("ARITHMETIC OPERATORS");
printf("\nenter the value a=");
scanf("%d",&a);
printf("enter the value b=");
scanf("%d",&b);
c=a+b;
printf("\n %d=c",c);
d=a-b;
printf("\n %d=d",d);
k=a*b;
printf("\n %d=k",k);
l=a/b;
printf("\n %d=1",l);

printf("\nRELATIONAL OPERATORS");
printf("\nenter the value e=");
scanf("%d",&e) ;
printf("enter the value f=");
scanf("%d",&f);
g=(e>f) ;
printf("\n %d=g",g);
h=(e<f);
printf("\n %d=h",h);
i=(e==f);
printf("\n %d=i",i);
j=(e!=f);
printf("\n %d=j",j);
m=(e<=f);
printf("\n %d=m",m);
n=(e>=f);
printf("\n %d=n",n);

printf("\nLOGICAL OPERATORS");
printf("\nenter the value o=");
scanf ("%d",&o);
printf("enter the value p=");
scanf("%d",&p) ;
q=(o>p)&& (p>o);
printf("\n %d=q",q);
r=(o<p) || (p!=o);
printf("\n %d=r",r);
s=! (o<p);
printf("\n %d=s",s);

printf("\nBitwise Operators");
printf("\nenter value of t in binary ");
scanf("%d",&t);
printf("enter value of u in binary ");
scanf("%d",&u);
v=t&u;
printf("\n %d=v",v);
w=t|u;
printf("\n %d=w",w);
x=t^u;
printf("\n %d=x",x);
y=t>>u;
printf("\n %d=y",y);
z=t<<u;
printf("\n %d=z",z);
A=~t;
printf("\n %d=A",A);
B=~u;
printf("\n %d=B",B);
}

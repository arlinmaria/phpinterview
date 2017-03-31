#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,f,i,l;
printf("enter the limit");
scanf("%d",&l);
printf("fibanocinumbers::%d,\t%d\t",a,b);

while(f<l)
{
f=a+b;

printf("%d\t\n",f);
a=b;
b=f;
}
getch();
}

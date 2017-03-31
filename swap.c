#include<stdio.h>
#include<conio.h>
void main()
{
   int a, b;
 
   printf("\nEnter value for num1 & num2 : ");
   scanf("%d %d", &a, &b);
   printf("%d%d",a,b);
 
   a = a + b;
   b = a - b;
   a = a - b;
 
   printf("\nAfter swapping value of a : %d", a);
   printf("\nAfter swapping value of b : %d", b);
 getch();
}

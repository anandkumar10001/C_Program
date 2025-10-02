#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, sum, difference, product, division;
printf("Enter first number ");
scanf("%d",&a);
printf("Enter second number ");
scanf("%d",&b);

//Sum
sum=a+b;
printf("Sum of two number is %d\n",sum);

//Difference 
difference=a-b;
printf("Difference of two number is %d\n",difference);

//Product
product=a*b;
printf("Product of two number is %d\n",product);

//Division 
division=a/b;
printf("Division of two number is %d",division);
getch();
}

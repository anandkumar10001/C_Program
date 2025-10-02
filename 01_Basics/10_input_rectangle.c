#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c, area, volume;
printf("Enter the value of length of the rectangle ");
scanf("%d",&a);
printf("Enter the value of breath of the rectangle ");
scanf("%d",&a);
printf("Enter the value of height of the rectangle ");
scanf("%d",&a);

//Area
area=a*b;
printf("Area of the rectangle is %d\n",area);

//Volume 
volume=a*b*c;
printf("Volume of the rectangle is %d",volume);
getch();
}
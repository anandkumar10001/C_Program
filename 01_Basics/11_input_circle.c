#include<stdio.h>
#include<conio.h>
void main()
{
float a=1.33, pi=3.14, r, area, volume;
printf("Enter the value of radius of the circle ");
scanf("%f",&r);

//Area
area=pi*r*r;
printf("Area of the circle is %f\n",area);

//Volume 
volume=a*pi*r*r*r;
printf("Volume of the sphere is %f",volume);
getch();
}
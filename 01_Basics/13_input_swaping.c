#include<stdio.h>
#include<conio.h>
void main()
{
int x, y, z;
printf("Enter the value for x ");
scanf("%d",&x);
printf("Enter the value for y ");
scanf("%d",&y);
printf("Value after swaping of x =%d and y =%d\n",x,y);
z=x;
x=y;
y=z;
printf("Value after swaping of x =%d and y =%d",x,y);
getch();
}
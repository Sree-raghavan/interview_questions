#include<stdio.h>
#include<conio.h>
void main()
{
	int radius;
	float pi=3.1416;
	float area=0;
	clrscr();
	printf("Enter the area of Circle:");
	scanf("%d",&radius);
	area=(float)(pi*radius*radius);
	printf("Area of circle with radius %d is %f",radius,area);
	getch();
}
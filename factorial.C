#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	unsigned long fact=1;
	clrscr();
	printf("Enter a number to find its Factorial :");
	scanf("%d",&n);
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	printf("Factorial of %d is %lu",n,fact);
	getch();
}
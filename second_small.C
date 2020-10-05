#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	int first=0,second=0,current,n,i;
	clrscr();
	first=second=INT_MAX;
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&current);
		if(current<first)
		 {
		   second=first;
		   first=current;
		 }
		else if(current<second)
		{
		 second=current;
		}
	}
	printf("Second Smallest no is %d ",second);
	getch();
}
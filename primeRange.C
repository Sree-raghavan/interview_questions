#include<stdio.h>
#include<conio.h>
void primecheck(int start, int last)
{
	int i, j, flag;
	for (i = start; i <= last; i++)
	{
		if (i == 1 || i == 0)
			continue;
		flag = 1;
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		 printf("%d ", i);
	}
}
void main()
{
	int n;
	clrscr();
	printf("Enter the range :");
	scanf("%d",&n);
	primecheck(1,n);
	getch();
}

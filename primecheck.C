#include <stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int n, i, flag = 1;
	clrscr();
	printf("Enter a number: \n");
	scanf("%d", &n);
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}

	if(n<=1)
		flag=0;
	else if(n==2)
		flag=1;

	if (flag == 1)
		printf("%d is a prime number", n);
	else
		printf("%d is not a prime number", n);
	getch();
}

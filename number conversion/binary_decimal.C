#include<math.h>
#include<stdio.h>
#include<conio.h>
int binaryTodecimal(long long n)
{
    int dec=0,i=0,rem;
    while (n != 0)
    {
	rem = n % 10;
	n /= 10;
	dec += rem * pow(2, i);
	++i;
    }
    return dec;
}
void decimalTobinary(int n)
{
    int binaryNum[32];
    int i=0,j=0;
    while (n > 0)
    {
	binaryNum[i] = n % 2;
	n = n / 2;
	i++;
    }
    for (j=i-1; j >= 0; j--)
	printf("%d ",binaryNum[j]);
    printf("is the binarynumber\n");
}
void main()
{
	long long n;
	int ch;
	clrscr();
	printf("\n1.Binary to decimal \n2.decimal to binary ");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1 :
		printf("Enter a binary number: ");
		scanf("%lld", &n);
		printf("%lld in binary = %d in decimal", n,binaryTodecimal(n));
		break;
	  case 2 :
		printf("Enter a decimal number: ");
		scanf("%d", &n);
		decimalTobinary(n);
		break;
	  default: printf("wrong choice");
	}
	getch();
}


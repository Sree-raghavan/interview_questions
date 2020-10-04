#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, end, isPrime, sum=0;
    clrscr();
    printf("Enter the range from 1 to :");
    scanf("%d", &end);
    for(i=2; i<=end; i++)
    {
	isPrime = 1;
	for(j=2;j<=i/2;j++)
	{
	    if(i%j==0)
	    {
		isPrime = 0;
		break;
	    }
	}
	if(isPrime==1)
	{
	    printf("%d ",i);
	    sum += i;
	}
    }
    printf("\nSum of all prime numbers between 1 to %d = %d", end, sum);
    getch();
}
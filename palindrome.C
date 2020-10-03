#include<stdio.h>
#include<conio.h>
unsigned long rev(unsigned long n,unsigned long temp)
{
    if (n == 0)
	return temp;
    temp = (temp * 10) + (n % 10);
    return rev(n / 10, temp);
}
void main()
{
    unsigned long n,temp;
    clrscr();
    printf("ENTER THE NUMBER:");
    scanf("%lu",&n);
    temp = rev(n,0);
    if(temp==n)
     printf("%lu is palindrome");
    else
     printf("%lu is not palindrome");
    getch();
}
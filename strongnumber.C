#include <stdio.h>
#include<conio.h>
int factorial(int r)
{
   int fact = 1;
   while(r>1)
   {
      fact = fact * r;
      r--;
   }
   return fact;
}
int check(int n)
{
   int temp, rem, result = 0;
   temp = n;
   while(temp)
   {
      rem = temp % 10;
      result = result + factorial(rem);
      temp = temp/10;
   }
   if (result == n)
      return 1;
   else
      return 0;
}
void main()
{
   int n;
   clrscr();
   printf("Enter the Number :");
   scanf("%d",&n);
   if (check(n))
      printf("%d is Strong Number \n",n);
   else
      printf("%d is not a strong number \n",n);
   getch();
}

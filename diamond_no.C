#include<stdio.h>
#include<conio.h>
void main()
{
   int n,a,i=0,j=0,k=0;
   clrscr();
   printf("Enter number of rows: ");
   scanf("%d",&n);
   for( i=1; i<=n; i++)
   {
     a = 1;
     for(j=i;j<=n;j++)
     {
       printf(" ");
     }
     for(k=1; k <= 2*i-1; k++)
     {
       printf("%d",a++);
     }
     printf("\n");
   }
   for(i=n-1; i>=1; i--)
   {
     a=1;
     for(j=n; j>=i; j--)
     {
       printf(" ");
     }
     for(k=1; k<=2*i-1; k++)
     {
       printf("%d",a++);
     }
     printf("\n");
   }
   getch();
}
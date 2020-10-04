#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, k;
    char *str = (char *)malloc(100 * sizeof(char));
    char *rev = (char *)malloc(100 * sizeof(char));
    clrscr();
    printf("Enter a string:\t");
    scanf("%s", str);
    printf("The original string is %s\n", str);
    for(i = 0; str[i]!= '\0'; i++);
    {
	k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
	rev[j] = str[k];
	k--;
    }
    printf("The reverse string is %s\n", rev);
    getch();
}
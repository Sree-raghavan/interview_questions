#include<stdio.h>
#include<math.h>
#include<conio.h>
int decimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
	octalNumber += (decimalNumber % 8) * i;
	decimalNumber /= 8;
	i *= 10;
    }

    return octalNumber;
}
long long octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
	decimalNumber += (octalNumber%10) * pow(8,i);
	++i;
	octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}
void main()
{
    int decimalNumber,octalNumber,ch;
    clrscr();
    printf("\n1.Decimal to octal \n2.octal to decimal ");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:
	    printf("Enter a decimal number: ");
	    scanf("%d", &decimalNumber);
	    printf("%d in decimal = %d in octal", decimalNumber, decimalToOctal(decimalNumber));
	    break;
	case 2:
	    printf("Enter an octal number: ");
	    scanf("%d", &octalNumber);
	    printf("%d in octal = %lld in decimal", octalNumber, octalToDecimal(octalNumber));
	    break;
	default:
	    printf("\nWrong choice \n");
    }
    getch();
}


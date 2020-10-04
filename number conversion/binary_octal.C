#include<math.h>
#include<stdio.h>
#include<conio.h>
long long octalTobinary(int oct) {
    int dec = 0, i = 0;
    long long bin = 0;

    while (oct != 0)
    {
	dec += (oct % 10) * pow(8, i);
	++i;
	oct /= 10;
    }

    i = 1;

    while (dec != 0)
    {
	bin += (dec % 2) * i;
	dec /= 2;
	i *= 10;
    }
    return bin;
}
int binaryToOctal(long long bin)
{
    int oct = 0, dec = 0, i = 0;

    while (bin != 0)
    {
	dec += (bin % 10) * pow(2, i);
	++i;
	bin /= 10;
    }
    i = 1;

    while (dec != 0) {
	oct += (dec % 8) * i;
	dec /= 8;
	i *= 10;
    }
    return oct;
}
void main()
{
    long long bin;
    int oct,ch;
    clrscr();
    printf("\n1.Binary to octal \n2.octal to Binary ");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:
		 printf("Enter a binary number: ");
		 scanf("%lld", &bin);
		 printf("%lld in binary = %d in octal", bin,binaryToOctal(bin));
		 break;
	case 2:
		    printf("Enter an octal number: ");
		    scanf("%d", &oct);
		    printf("%d in octal = %lld in binary", oct,octalTobinary(oct));
		    break;
	default:
		printf("Wrong choice\n");
    }
    getch();
}


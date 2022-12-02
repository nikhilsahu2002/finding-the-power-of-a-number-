#include<stdio.h>
#include<conio.h>
void main()
{
int base,power;
long result=1;
clrscr();
	printf("Enter The Base Number: ");
	scanf("%d",&base);
	printf("Enter The Power Number: ");
	scanf("%d",&power);

	while(power != 0)
	{
		result *= base ;
		power--;
	}
		printf("The Number Is %ld",result);
getch();
}
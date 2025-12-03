/*ramesh's basic salary is input throuh the keyboard.his dearness allowance is 40%nof basic salary, 
and house rent allowance is 20% of basic salary.write aprogram to calculate his gross salary*/


#include<stdio.h>
int main()
{
	int bs,da,hra,gross;
	printf("Enter basic salary:");
	scanf("%d",&bs);
	da=0.40*bs;
	hra=0.20*bs;
	
	gross=bs+da+hra;
	printf("Gross salry= %d\n",gross);
	
	return 0;
}

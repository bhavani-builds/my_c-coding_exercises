/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees. */
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter temparature in Fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Temparature in centigrade= %2f\n",c);
	
	return 0;
}

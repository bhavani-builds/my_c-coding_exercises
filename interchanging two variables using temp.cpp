/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/ 

#include<stdio.h>
int main()
{
	int c,d,temp;
	printf("Enter two numbers:");
	scanf("%d %d",&c,&d);
	temp=c;
	c=d;
	d=temp;
	printf("After interchanging:\n");
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	
	return 0;
}

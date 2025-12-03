#include<stdio.h>
int main(){
	int a=42516;
	int b=a%10;
	int c=(a/10)%10;
	int d=(a/100)%10;
	int e=(a/1000)%10;
	int f=(a/10000)%10;
	
	int reverse=b*10000+c*1000+d*100+e*10+f;
	printf("reverse of a number =%d",reverse);
	
	
	return 0;
	
}

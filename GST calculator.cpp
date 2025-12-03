#include<stdio.h>
int main()
{
	char product[50];
	int price,gstRate,gstAmount,totalPrice;
	
	printf("Enter the product name: ");
	scanf("%s",&product);
	printf("Enter the price: ");
	scanf("%d",&price);
	printf("Enter the gstRate(in %%): ");
	scanf("%d",&gstRate);
	gstAmount=price*gstRate/100;
	totalPrice=price+gstAmount;
	printf("\nproduct: %s\n",product);
	printf("\nprice: %d\n",price);
	printf("\ngstAmount: %d\n",gstAmount);
	printf("Totalprice:%d\n",totalPrice);
	
	
	return 0;
}

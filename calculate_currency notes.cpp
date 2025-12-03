/*A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer. */
#include<stdio.h>
int main()
{
    int amount;
    int hundred, fifty, ten;

    printf("Enter amount: ");
    scanf("%d", &amount);

    hundred = amount / 100;
    amount = amount % 100;

    fifty = amount / 50;
    amount = amount % 50;

    ten = amount / 10;
    amount = amount % 10;

    printf("100 rupee notes = %d\n", hundred);
    printf("50 rupee notes = %d\n", fifty);
    printf("10 rupee notes = %d\n", ten);

    return 0;
}

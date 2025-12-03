#include<stdio.h>
int main()
{
    int telugu, english, science, social, hindi, total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &telugu, &english, &science, &social, &hindi);

    total = telugu + english + science + social + hindi;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}

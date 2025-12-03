#include <stdio.h>

int main() {
    float km, meters, feet, inches, cm;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;
    feet = meters * 3.28084;
    inches = feet * 12;
    cm = meters * 100;

    printf("Meters = %.2f\n", meters);
    printf("Feet = %.2f\n", feet);
    printf("Inches = %.2f\n", inches);
    printf("Centimeters = %.2f\n", cm);

    return 0;
}

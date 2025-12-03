/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle. */

#include <stdio.h>

int main() {
    float length, breadth, radius;
    float rect_area, rect_perimeter, circle_area, circle_circumference;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);
    circle_area = 3.14 * radius * radius;
    circle_circumference = 2 * 3.14 * radius;
    
    printf("Area of Rectangle = %.2f\n", rect_area);
    printf("Perimeter of Rectangle = %.2f\n", rect_perimeter);
    printf("Area of Circle = %.2f\n", circle_area);
    printf("Circumference of Circle = %.2f\n", circle_circumference);

    return 0;
}

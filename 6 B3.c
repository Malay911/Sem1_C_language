#include <stdio.h>
#include <math.h>
void main() {
    float side1, side2, side3;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an equilateral triangle.\n");
    } 
	else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is an isosceles triangle.\n");
    } 
	else if (pow(side1, 2) + pow(side2, 2) == pow(side3, 2) ||
               pow(side1, 2) + pow(side3, 2) == pow(side2, 2) ||
               pow(side2, 2) + pow(side3, 2) == pow(side1, 2)) {
        printf("The triangle is a right-angled triangle.\n");
    } 
	else {
        printf("The triangle is a scalene triangle.\n");
    }
}

#include <stdio.h>
void main() {
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            printf("The second largest number is %.2f.\n", num2);
        } else {
            printf("The second largest number is %.2f.\n", num3);
        }
    } else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            printf("The second largest number is %.2f.\n", num1);
        } else {
            printf("The second largest number is %.2f.\n", num3);
        }
    } else if (num3 > num1 && num3 > num2) {
        if (num1 > num2) {
            printf("The second largest number is %.2f.\n", num1);
        } else {
            printf("The second largest number is %.2f.\n", num2);
        }
    } else {
        printf("All three numbers are equal.\n");
    }
}

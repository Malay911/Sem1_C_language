#include <stdio.h>
#include <stdlib.h>
void main() {
    char num[20];
    int choice;
    printf("Enter a number: ");
    scanf("%s", num);
    printf("Enter 1 to convert to integer, 2 to convert to float: ");
    scanf("%d", &choice);
    if (choice == 1) {
        int n = atoi(num);
        printf("The number as an integer is: %d\n", n);
    } else if (choice == 2) {
        float f = atof(num);
        printf("The number as a float is: %f\n", f);
    } else {
        printf("Invalid choice\n");
    }
}

